/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    struct ListNode* newhead=reverseList(head->next);
    struct ListNode* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;
    
    
}