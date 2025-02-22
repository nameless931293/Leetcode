#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int x):val(x), right(nullptr), left(nullptr){};
};
/*
主要是想出如何分割左右子樹
! 也就是判斷如何挪到下個子節點建立所需注意的部分inorder的範圍
*/ 
class Solution
{
    public:
        TreeNode* BuildTree(vector <int>& preorder, vector<int>& inorder)
        {
            int inStart=0;
            int preStart=0;
            int inEnd=inorder.size()-1;
            int preEnd=preorder.size()-1;
            map<int,int> iomap;
            for(int i=0; i<inorder.size(); i++)
            {
                iomap[inorder[i]]=i;
            }
            return Process(preorder, inorder, inStart, inEnd, preStart, preEnd, iomap);
        }
        
        TreeNode* Process(vector<int> preorder, vector<int> inorder, int inStart, int inEnd, int preStart, int preEnd, map<int,int>& iomap)
        {
            if(inStart>inEnd || preStart>preEnd)
            {
                return nullptr;
            }
            TreeNode* root=new TreeNode(preorder[preStart]);//逐步建立原始二元樹
            int position=iomap[root->val];//找尋和pre內元素在inorder的位置
            int cover=position-inStart;
            root->left=Process(preorder, inorder, inStart, position-1, preStart+1, preStart+cover, iomap);//控制左子樹的範圍
            root->right=Process(preorder, inorder, position+1, inEnd, preStart+1+cover, preEnd, iomap);
            return root;
        }
};

TreeNode* Print(TreeNode* root)
{
    if(root==nullptr)
    {
        return nullptr;
    }
    cout<<root->val<<endl;
    Print(root->left);
    Print(root->right);
}
int main()
{
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    Solution solution;
    TreeNode* root=solution.BuildTree(preorder, inorder);
    Print(root);
}