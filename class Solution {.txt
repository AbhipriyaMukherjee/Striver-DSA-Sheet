class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        ListNode*temp=head;
        while(temp!=NULL){
            if(temp->data==key) return true;
            temp=temp->next;
            
        }
        return false;
    }
};