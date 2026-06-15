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
    int pairSum(ListNode* head) {
        stack<int> st;
        st.push(head->val);
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast->next!=nullptr and fast!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            st.push(slow->val);
        }

        int ans=0;
        while(slow->next!=nullptr){
            slow=slow->next;
            int temp=st.top();
            st.pop();
            ans=max(ans,temp+slow->val);
        }
        return ans;


    }
};