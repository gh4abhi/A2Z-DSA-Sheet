// Problem Link - https://www.geeksforgeeks.org/problems/introduction-to-linked-list/1

#define ll int


class Solution {
  public:
  
    Node* constructLL(vector<int>& arr) {
        Node* head = new Node(-1);
        Node* temp = head;
        for(auto i:arr)
        {
            Node* newNode = new Node(i);
            temp->next = newNode;
            temp = newNode;
        }
        return head->next;
    }
};