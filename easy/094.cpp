/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //&=引用的意思 int&a=b; 代表更改a或b都會互相影響
    void solve(TreeNode *root, vector<int>& store)
    {
        if(!root)
        {
            return;
        }
        if(root->left)
        {
            solve(root->left, store);
        }
        store.push_back(root->val);
        if(root->right)
        {
            solve(root->right, store);
            /*
            if(root->right->left)
            {
                solve(root->right->left, store);
            }
            else if(root->right->right)
            {
                solve(root->right->right, store);
            }
            */
        }
        //當往左見底時就先往左再往右
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> store;
        solve(root, store);
        return store;
    }
};