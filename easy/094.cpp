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
    //&=�ޥΪ��N�� int&a=b; �N����a��b���|���ۼv�T
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
        //���������ɴN�������A���k
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> store;
        solve(root, store);
        return store;
    }
};