/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        if (!head || !head->next) return;

    Node *slow = head, *fast = head;

    // Detect Loop using Floyd's Cycle Detection Algorithm
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { // Loop detected
            break;
        }
    }

    // If no loop is detected, return
    if (slow != fast) return;

    // Find the start of the loop
    slow = head;
    if (slow == fast) {
        while (fast->next != slow) fast = fast->next;
    } else {
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    // Break the loop
    fast->next = NULL;
    }
};