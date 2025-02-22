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
    //若p,q都是nullptr(空指標)則兩指標指向的位址相同
    //每個二元樹都是獨立建造的=>pq的值不會相等除nullptr外
    void match(TreeNode* p, TreeNode* q, bool& check)
    {
        if (!p && !q) {
            // 如果 p 和 q 都是 nullptr，這部分樹結構一致，無需改變 check
            return;
        }
        if(!p || !q)//若p or q非null放進if句則會是true反之是空指標就是false
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