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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr || k == 0)
            return head;

        // Step 1: Find length
        ListNode* temp = head;
        int count = 1;
        while(temp->next != nullptr){
            temp = temp->next;
            count++;
        }

        // Step 2: Make it circular
        temp->next = head;

        // Step 3: Reduce k
        k = k % count;

        // Step 4: Find new tail
        int steps = count - k - 1;
        temp = head;
        for(int i = 0; i < steps; i++){
            temp = temp->next;
        }

        // Step 5: Break the circle
        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};