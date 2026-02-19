class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr||head->next==nullptr){
            return NULL;
        }
        ListNode*temp=nullptr;
        ListNode*slow=head;
        ListNode*fast=head;
        
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==nullptr){
            ListNode*newHead=head->next;
            delete (head);
            return newHead;
        }
        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        temp=slow->next;
        slow->next=slow->next->next;
        delete(temp);
        return head;
        
    }
};