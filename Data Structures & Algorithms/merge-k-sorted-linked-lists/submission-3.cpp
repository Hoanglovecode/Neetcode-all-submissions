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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>nodes;
        for(ListNode* lst:lists){
            while(lst){
                nodes.push_back(lst->val);
                lst=lst->next;
            }
        }
        sort(nodes.begin(),nodes.end());
        ListNode dummy(0);
        ListNode*tmp=&dummy;
        for(int x:nodes){
            tmp->next=new ListNode(x);
            tmp=tmp->next;
        }
        return dummy.next;
    }
};
