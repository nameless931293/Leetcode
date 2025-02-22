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
�D�n�O�Q�X�p����Υ��k�l��
! �]�N�O�P�_�p�󮿨�U�Ӥl�`�I�إߩһݪ`�N������inorder���d��
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
            TreeNode* root=new TreeNode(preorder[preStart]);//�v�B�إ߭�l�G����
            int position=iomap[root->val];//��M�Mpre�������binorder����m
            int cover=position-inStart;
            root->left=Process(preorder, inorder, inStart, position-1, preStart+1, preStart+cover, iomap);//����l�𪺽d��
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