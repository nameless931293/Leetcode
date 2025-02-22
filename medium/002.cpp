/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode ans(0);
        ListNode *point=&ans;
        int store=0;
        
        while(l1!=nullptr || l2!=nullptr)
        {
            if(l1!=nullptr)
            {
                store+=(l1->val);
                l1=l1->next;
            }
            if(l2!=nullptr)
            {
                store+=(l2->val);
                l2=l2->next;
            }
            point->next=new ListNode(store%10);//不用理會store是10幾
            store/=10;
            point=point->next;
        }
        if(store != 0)
        {
           point->next = new ListNode(store);
            
        }
        return ans.next;
    }
};