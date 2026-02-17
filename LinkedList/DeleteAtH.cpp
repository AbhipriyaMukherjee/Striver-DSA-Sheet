class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
        ListNode*temp=head;
        head=head->next;
        free(temp);
    return head;
        
    }
};