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
    ListNode* deleteDuplicates(ListNode* head) {
        //ListNode* head;
        ListNode* compare=head;
        /*
        if (compare == nullptr)
        {
            return head;
        }
        */
        while(compare!= nullptr && compare->next!=nullptr)
        {
            if(compare->val==compare->next->val)
            {
                ListNode* temp=compare->next;
                compare->next=compare->next->next;
                delete temp;
            }
            else
            {
                compare=compare->next;
            }
        }
        
        return head;
    }
};