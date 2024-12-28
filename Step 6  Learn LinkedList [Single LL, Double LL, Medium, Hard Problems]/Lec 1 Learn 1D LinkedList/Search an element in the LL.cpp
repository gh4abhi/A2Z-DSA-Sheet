// Problem Link - https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        while(head)
        {
            if(head->data==key)
                return 1;
            head = head->next;
        }
        return false;
    }
};
