/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr=head;
        ListNode* ptr2=head;
        while(ptr2!=NULL &&ptr2->next!=NULL)
        {
            ptr=ptr->next;
            ptr2=ptr2->next->next;
        }
        return ptr;
        
    }
};