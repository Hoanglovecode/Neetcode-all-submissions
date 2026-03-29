class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=slow->next;
        ListNode* pre=slow->next=nullptr;
        ListNode* tmp;
        while(second){
            tmp=second->next;
            second->next=pre;
            pre=second;
            second=tmp;
        }
        second=pre;
        ListNode* first=head;
        while(second){
            ListNode* tmp1=first->next;
            ListNode* tmp2=second->next;
            first->next=second;
            second->next=tmp1;
            first=tmp1;
            second=tmp2;
        }
    }
};
