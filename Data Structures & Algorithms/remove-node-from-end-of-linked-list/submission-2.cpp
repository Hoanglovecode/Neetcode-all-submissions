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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int dem=0;
        ListNode*tmp1=head;
        while(tmp1){
            dem++;
            tmp1=tmp1->next;
        }
        int k=dem-n+1;
        if(k==1) return head->next;
        ListNode*tmp=head;
        for(int i=1;i<k-1;i++){
            tmp=tmp->next;
        }
        ListNode*nodek=tmp->next;
        tmp->next=nodek->next;
        delete(nodek);
        return head;
    }
};
