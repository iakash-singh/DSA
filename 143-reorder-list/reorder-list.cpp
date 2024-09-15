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
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next){
            return ;
        }

        ListNode* changenode = head;
        while(changenode->next->next) changenode = changenode->next;

        changenode->next->next = head->next;
        head->next = changenode->next;

        changenode->next = NULL;

        reorderList(head->next->next);
    }
};