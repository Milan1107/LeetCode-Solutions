/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    void insertInBetween(Node* head)
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            Node *copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = temp->next->next;
        }
    }
    void connectRandomPointer(Node* head)
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            Node* copy = temp->next;
            if(temp->random!=NULL)
            {
                copy->random = temp->random->next;
            }
                temp = temp->next->next;
            
        }
    }
    Node* getDeepCopyClone(Node* head)
    {
        Node* dnode = new Node(-1);
        Node* res = dnode;
        Node* temp = head;
        while(temp!=NULL)
        {
            res->next = temp->next;
            temp->next = temp->next->next;
            res = res->next;
            temp = temp->next;
        }
        return dnode->next;
    }

    Node* copyRandomList(Node* head) {
        insertInBetween(head);
        connectRandomPointer(head);
        return getDeepCopyClone(head);
    }
};