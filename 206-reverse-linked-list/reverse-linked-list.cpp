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

    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newhead = reverse(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newhead;
    }


    ListNode* reverseList(ListNode* head) {
        // ListNode* temp = head;
        // stack<int> stack;
        // while(temp!=NULL){
        //     stack.push(temp->val);
        //     temp = temp->next;
        // }

        // temp=head;
        // while(temp!=NULL){
        //     temp->val = stack.top();
        //     stack.pop();
        //     temp=temp->next;
        // }
        // return head;

        // ListNode* last = NULL;
        // ListNode* current = head;
        // while(current!=NULL){
        //     last = current->next;
        //     current->next = last
        // }

        return reverse(head);
    }
};