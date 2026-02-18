class Solution {
  public:
    Node *reverse(Node *head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        Node*current=head;
        Node*last=nullptr;
        while(current!=nullptr){
            last=current->prev;
            current->prev=current->next;
            current->next=last;
            current=current->prev;
        }
        return last->prev;
        // code here
        
    }
};