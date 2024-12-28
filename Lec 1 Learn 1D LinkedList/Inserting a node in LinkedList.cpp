// Problem Link - https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0

#define ll int


class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* temp = head;
        if(temp=nullptr)
            return new Node(x);
        while(temp->next)
            temp = temp->next;
        temp->next = new Node(x);
        return head;
    }
};