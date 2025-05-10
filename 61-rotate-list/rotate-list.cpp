class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;

        int length = 1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            length++;
        }

        k %= length;
        if (k == 0) return head;

        temp->next = head;

        int stepsToNewHead = length - k;
        while (stepsToNewHead--) {
            temp = temp->next;
        }

        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};
