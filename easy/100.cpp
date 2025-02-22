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
    //�Yp,q���Onullptr(�ū���)�h����Ы��V����}�ۦP
    //�C�ӤG���𳣬O�W�߫سy��=>pq���Ȥ��|�۵���nullptr�~
    void match(TreeNode* p, TreeNode* q, bool& check)
    {
        if (!p && !q) {
            // �p�G p �M q ���O nullptr�A�o�����𵲺c�@�P�A�L�ݧ��� check
            return;
        }
        if(!p || !q)//�Yp or q�Dnull��iif�y�h�|�Otrue�Ϥ��O�ū��дN�Ofalse
        {
            //cout<<1<<endl;
            check=false;
            return;
        }
        if(p->val!=q->val)
        {
            //cout<<2<<endl;
            check=false;
            return;
        }
        cout<<3<<endl;
        if(p && q)
        {
            match(p->left, q->left, check);
        }
        match(p->right, q->right, check);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool check=true;
        match(p,q,check);
       
        return check;
    }
};