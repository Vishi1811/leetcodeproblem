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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * t1=list1, *t2=list2;
        ListNode* newhead = new ListNode(-1);
        ListNode* current = newhead;
        while(t1 && t2)
        {
            if(t1->val<=t2->val)
            {
                current->next=t1;
                t1=t1->next;
                current=current->next;
            }
            else
            {
                current->next=t2;
                t2=t2->next;
                current=current->next;
            }

        }
        if(t1)current->next=t1;
        else current->next=t2;
        return newhead->next;
    }
};