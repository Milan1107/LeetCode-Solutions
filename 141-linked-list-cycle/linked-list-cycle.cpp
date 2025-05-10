/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool cyclefound = false;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow)
            {
                cyclefound = true;
                break;
            }
        }
        if(!cyclefound)return NULL;
        fast = head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};