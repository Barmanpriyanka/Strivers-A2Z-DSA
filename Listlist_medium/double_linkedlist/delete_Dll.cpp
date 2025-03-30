
/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
    public:
      // Function to delete a node at given position.
      Node* deleteNode(Node* head, int x) {
          // Your code here
          if (!head) return NULL;
          
          Node* temp = head;
          
          
          if (x == 1) {
              head = head->next;
              if (head) head->prev = NULL;
              delete temp;
              return head;
          }
  
          
          for (int i = 1; temp != NULL && i < x; i++) {
              temp = temp->next;
          }
  
          
          if (!temp) return head;
  
          
          if (temp->prev) temp->prev->next = temp->next;
          if (temp->next) temp->next->prev = temp->prev;
  
          delete temp;
          return head;
      }
  };