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
        ListNode* dummy=new ListNode(0,head);
        /*
        dòng này có nghĩa là khởi tạo node giải
        dummy->val=0;
        dummy->next=head;
        */
        ListNode* left=dummy;
        ListNode*right=head;
        while(n>0){
            right=right->next;
            n--;
        }
        while(right!=nullptr){
            left=left->next;
            right=right->next;
        }
        ListNode*nodedelete=left->next;
        left->next=nodedelete->next;
        delete(nodedelete);
        return dummy->next;
    }
};
