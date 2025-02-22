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
if((list2->val)>=(list1->val) && (list2->val)< (list1->next->val))//l2���`�I�Ȧbl1����`�I����
        {
            int *pt=list1->next
            list1->next=list2;
            list2->next=pt;
        }
 */
class Solution {
public:
    //�Q�Ϋ��Ъ��S��
    void Add(ListNode* list1, ListNode* list2)//�P�ɤ����`�I
    {
        if(list2==nullptr) return;
        if(list1->next!=nullptr && list1!=nullptr)
        {
            if((list2->val)>=(list1->val) && (list2->val)< (list1->next->val)  )//�����N�`�I�@�L�h���u�@
            {
                //�n�N��1�����Ы��V��1
                //��1�����Эn���V��2
                //l2�n���V��3
                ListNode* l2copy=list2;//�n����1��
                ListNode* l1nextcopy=list1->next;//���V��2
                ListNode* purple1=list2->next;
            
                list2->next=l1nextcopy;
                list1->next=l2copy;//
                list2=purple1;//�N���V��3����}��list2
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
        if (list1 == nullptr) return list2;  // �p�G list1 ���šA������^ list2
        if (list2 == nullptr) return list1;  // �p�G list2 ���šA������^ list1

        // �ھڭȪ��j�p�ӽT�w�}�l���Y���I
        if (list1->val > list2->val) swap(list1, list2);
        Add(list1, list2);
        return list1;
    }
};
/*

bool check=false;
        if(list1==list2)//����Ь۵�=>�����V�P�Ӧ�m=>���Onullptr
        {
            return list1;
        }
        if(list2!=nullptr)
        {
            Add(list1, list2);//���Ĳ�o���禡, ��l2�٦��`�I���ɭ�
            mergeTwoLists(list1, list2->next)
        }
        else
        {
            check=true;//�@���}��
        }
        //���]�`�I���T,���ݨ�ĤT�Ӹ`�I��list2�|�ܦ�nullptr
        //�]�N�O�̫�@�Ӹ`�I���w���|�i��add�禡
        //�ҥH�u�n�A����@�M�Y�i
        if(check==true)
        {
            Add(list1, list2);
            return list1;
        }

*/