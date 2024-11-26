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
    ListNode* reverse(ListNode * head)
    {
        if(head==NULL || head->next==NULL)return head;
        ListNode* front=head->next;
        ListNode* back=NULL;
        ListNode*temp=head;

        while(front)
        {
           
            temp->next=back;
            back=temp;
            temp=front;
            front=front->next;
        }
        temp->next=back;
        return temp;
    }
    bool isPalindrome(ListNode* head) {
        //------>using stack-------->
       /* stack<int>st;
        ListNode *temp=head;
        while(temp)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp)
        {
            if(temp->val!=st.top())return false;
            st.pop();
            temp=temp->next;
        }
        return true;
        time complexity:O(n),space complexity:O(n)*/
        
        //<--------Optimum solution------------->
        ListNode *temp=head;
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *newhead=reverse(slow->next);
        temp=head;
        while(newhead)
        {
            if(temp->val!=newhead->val)
            {
                reverse(slow->next);
                return false;
            }
            temp=temp->next;
            newhead=newhead->next;
        }
      reverse(slow->next);
       return true;
        
    }
};