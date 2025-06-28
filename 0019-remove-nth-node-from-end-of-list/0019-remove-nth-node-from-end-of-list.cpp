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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        int size = 0;

        while(current != nullptr) {
            size++;
            current = current->next;
        }

        if(size == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        current = head;
        
        for(int i = 0; i < size - n - 1; i++) {
            current = current->next;
        }

        current->next = current->next->next;
        return head;

    }
};