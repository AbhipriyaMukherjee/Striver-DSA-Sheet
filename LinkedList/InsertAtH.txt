class Solution {
    public:
        ListNode* insertAtHead(ListNode* &head, int X) {
            ListNode* temp = new ListNode(X, nullptr);
            temp->next = head;
            head = temp;
            return head;
        }