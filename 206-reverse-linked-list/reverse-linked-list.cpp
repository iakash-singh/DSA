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
    ListNode* recursion(ListNode* node, ListNode*& newHead){
        if(node->next == NULL){
            newHead = node;
            return node;
        }

        ListNode* temp = recursion(node->next, newHead);
        
        temp->next = node;
        node->next = NULL;
        
        return node;
    }
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* newHead = NULL;
        recursion(head, newHead);
        return newHead;
    }
};