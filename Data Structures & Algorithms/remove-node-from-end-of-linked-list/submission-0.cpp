class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int dem=0;
        ListNode*tmp1=head;
        while(tmp1){
            dem++;
            tmp1=tmp1->next;
        }
        int k=dem-n+1;//delete at position n-k+1
        if(k==1)return head->next;
        ListNode*tmp2=head;
        for(int i=1;i<=k-2;i++){
            tmp2=tmp2->next;
        }
        ListNode*nodek=tmp2->next;
        tmp2->next=nodek->next;
        delete(nodek);
        return head;
    }
};
