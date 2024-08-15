/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
         ListNode *previous=NULL;
         ListNode *current=head;
         ListNode *ahead=current->next;
          while(current!=NULL)
          {
            current->next=previous;
            previous=current;
            current=ahead;
            if(current!=NULL){
            ahead=ahead->next;
            }
          }

     return previous;
    }
};