// Problem Link - https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/0


#define ll int

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {
        ll ans = 0;
        while(head->next)
            ans++, head = head->next;
        return ans+1;
    }
};
