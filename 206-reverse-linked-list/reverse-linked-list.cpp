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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev=nullptr;
        ListNode* post=nullptr;
        
        if(temp==nullptr)return head;

        while(temp!=nullptr)
        {
            post = temp->next;
            temp->next = prev;
            prev = temp;
            temp = post;
        }
        head = prev;

        return head;
    }
};