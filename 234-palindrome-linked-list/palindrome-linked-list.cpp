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
    bool isPalindrome(ListNode* head) {
        ListNode* fast,*slow;
        fast = head;
        slow = head;
        if(head == nullptr || head->next == nullptr)
        {
            return true;
        }
        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;;
        }
        slow->next = reverseList(slow->next);
        slow = slow->next;

        while(slow != nullptr)
        {
            if(head->val != slow->val){
                return false;
            }
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* pre = nullptr;
        ListNode* nex = nullptr;
        while(head!=nullptr)
        {
            nex = head->next;
            head->next = pre;
            pre = head;
            head = nex;
        }
        return pre;
    }
};