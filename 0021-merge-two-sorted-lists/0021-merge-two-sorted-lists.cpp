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
        vector<int>temp;
        while(t1)
        {
            temp.push_back(t1->val);
            t1=t1->next;

        }
        while(t2)
        {
            temp.push_back(t2->val);
            t2=t2->next;
        }
        sort(temp.begin(),temp.end());
        ListNode* newhead = new ListNode(-1);
        ListNode* current = newhead;

        for (int val : temp) {
            ListNode* n = new ListNode(val);
            current->next = n;
            current = n;
        }
        return newhead->next;
    }
};