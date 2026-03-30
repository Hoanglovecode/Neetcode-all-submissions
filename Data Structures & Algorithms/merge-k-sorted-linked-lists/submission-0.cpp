class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>nodes;
        for(ListNode*lst:lists){
            while(lst){
                nodes.push_back(lst->val);
                lst=lst->next;
            }
        }
        sort(nodes.begin(),nodes.end());
        ListNode dummy(0);
        ListNode *cur=&dummy;
        for(int node:nodes){
            cur->next=new ListNode(node);
            cur=cur->next;
        }
        return dummy.next;
    }
};
