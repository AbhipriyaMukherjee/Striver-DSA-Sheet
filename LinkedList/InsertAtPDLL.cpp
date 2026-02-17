class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        if(head==nullptr) return new Node(x);
        Node*temp=head;
        for(int i=0;i<p&&temp->next!=nullptr;i++){
            temp=temp->next;
        }
        Node*newNode=new Node(x);
        newNode->next=temp->next;
        newNode->prev=temp;
        if(temp->next!=nullptr){
            temp->next->prev=newNode;
        }
        temp->next=newNode;
        return head;
        // code here
        
    }
};