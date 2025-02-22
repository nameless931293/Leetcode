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
 /*
if((list2->val)>=(list1->val) && (list2->val)< (list1->next->val))//l2的節點值在l1的兩節點直內
        {
            int *pt=list1->next
            list1->next=list2;
            list2->next=pt;
        }
 */
class Solution {
public:
    //利用指標的特性
    void Add(ListNode* list1, ListNode* list2)//同時比較兩節點
    {
        if(list2==nullptr) return;
        if(list1->next!=nullptr && list1!=nullptr)
        {
            if((list2->val)>=(list1->val) && (list2->val)< (list1->next->val)  )//完成將節點一過去的工作
            {
                //要將紅1的指標指向紫1
                //紫1的指標要指向紅2
                //l2要指向紫3
                ListNode* l2copy=list2;//要給紅1的
                ListNode* l1nextcopy=list1->next;//指向紅2
                ListNode* purple1=list2->next;
            
                list2->next=l1nextcopy;
                list1->next=l2copy;//
                list2=purple1;//將指向紫3的位址給list2
                Add(list1->next, list2);
            }
            else
            {
                Add(list1->next, list2);
            }
        }
        else
        {
            if(list1->next==nullptr)
            {
                list1->next=list2;
            }
        }


    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if (list1 == nullptr) return list2;  // 如果 list1 為空，直接返回 list2
        if (list2 == nullptr) return list1;  // 如果 list2 為空，直接返回 list1

        // 根據值的大小來確定開始的頭結點
        if (list1->val > list2->val) swap(list1, list2);
        Add(list1, list2);
        return list1;
    }
};
/*

bool check=false;
        if(list1==list2)//兩指標相等=>都指向同個位置=>都是nullptr
        {
            return list1;
        }
        if(list2!=nullptr)
        {
            Add(list1, list2);//何時觸發此函式, 當l2還有節點的時候
            mergeTwoLists(list1, list2->next)
        }
        else
        {
            check=true;//作為開關
        }
        //假設節點有三,那看到第三個節點時list2會變成nullptr
        //也就是最後一個節點必定不會進到add函式
        //所以只要再執行一遍即可
        if(check==true)
        {
            Add(list1, list2);
            return list1;
        }

*/