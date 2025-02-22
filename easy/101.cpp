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
    void Lrecord(TreeNode* point, vector<int>&Lstore)
    {
        Lstore.push_back(point->val);
        if(point->left==nullptr)
        {
            Lstore.push_back(101);
        }
        if(point->left!=nullptr)
        {
            Lrecord(point->left, Lstore);
        }

        if(point->right==nullptr)
        {
            Lstore.push_back(101);
        }
        if(point->right!=nullptr)
        {
            Lrecord(point->right, Lstore);
        }
    }
    void Rrecord(TreeNode* point, vector<int>&Rstore)
    {
        Rstore.push_back(point->val);
        
        if(point->right==nullptr)
        {
            Rstore.push_back(101);
        }
        if(point->right!=nullptr)
        {
            Rrecord(point->right, Rstore);
        }
        
        if(point->left==nullptr)
        {
            Rstore.push_back(101);
        }
        if(point->left!=nullptr)
        {
            Rrecord(point->left, Rstore);
        }
    }
    //idea1:�@�˥λ��j���覡
    //�����vector�s
    //�ۦP�N�N����
    //���I�b����l��M�c�l�ƪ��s�k���j�̼�
    bool isSymmetric(TreeNode* root) {
        if(root->left == root->right)
        {
            return true;
        }
        else if(root->left==nullptr || root->right==nullptr)
        {
            return false;
        }
        vector <int> Lstore;
        vector <int> Rstore;
        Lrecord(root->left, Lstore);
        Rrecord(root->right, Rstore);
        if(Lstore==Rstore)
        {
            return true;
        }
        return false;
    }
};