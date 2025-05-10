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
//  void selection_sort(ListNode* list1)
//  {
//     ListNode* temp = list1;
//     while(temp->next->next!=nullptr)
//     {
//         int ntempdata = temp->val;
//         ListNode* nntemp=temp;
//         while(nntemp->next!=nullptr)
//         {
//             if(ntempdata>nntemp->val)
//             {
//                 int swap = ntempdata;
//                 ntempdata = nntemp->val;
//                 nntemp->val = swap;
//             }
//         }
//     }
//  }
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr = new ListNode(0);
        ListNode* dummy = curr;
        while(list1!=nullptr && list2!=nullptr)
        {
            if(list1->val>list2->val)
            {
                curr->next = list2;
                list2=list2->next;
                curr = curr->next;
            }
            else
            {
                curr->next = list1;
                list1=list1->next;
                curr = curr->next;
            }
        }
        curr->next = list1!=nullptr?list1:list2;

        
       return dummy->next;
    }
};