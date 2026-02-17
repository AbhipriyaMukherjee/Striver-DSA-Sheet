Node *deleteHead(Node *head) {
    // Your code here
    if(head==nullptr) return nullptr; 

        
        if(head->next==nullptr) {
            delete head;   
            
            return nullptr;
        }
        Node*temp=head;
        head=head->next;
        head->prev=nullptr;
        temp->next=nullptr;

        delete temp;
        return head;
    }
