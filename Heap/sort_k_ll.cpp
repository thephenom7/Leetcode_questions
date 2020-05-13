/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(ListNode *head:lists)
        {
            while(head)
            {
                q.push(head->val);
                head=head->next;
            }
        }
        ListNode *dummy=new ListNode(-1);
        ListNode *nhead=dummy;
        while(!q.empty())
        {
            nhead->next=new ListNode(q.top());
            q.pop();
            nhead=nhead->next;
        }
        return dummy->next;
        
    }
};
