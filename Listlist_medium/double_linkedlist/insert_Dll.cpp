/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
    public:
      // Function to insert a new node at given position in doubly linked list.
      Node *addNode(Node *head, int pos, int data) {
          // code here
           if (!head) return new Node(data); 
          
             Node *  temp = head;
             Node* newNode = new Node(data);
            for(int i=0;i<pos && temp->next!=NULL;i++)
            {
                temp=temp->next;
            }
             newNode->next=temp->next;
             if(temp->next!=NULL)
             {
                 temp->next->prev=newNode;
             }
             temp->next = newNode;
             newNode->prev=temp;
             return head;
      }
  };