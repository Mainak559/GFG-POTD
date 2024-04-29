//https://www.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1



/* Structure of the node of the list is as
struct Node
{
    int data;
    struct Node *next, *prev;
    Node (int x){
        data = x;
        next = prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to sort the given doubly linked list using Merge Sort.
    Node* getMiddle(Node*head){
        if(!head || !head->next) return head;
        Node* slow=head;
        Node* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
    
    Node*merge(Node*left,Node*right){
        if(!left) return right;
        if(!right) return left;
        
        //left or right jo smaller ho use choose krlo
        if(left->data < right->data){
            left->next=merge(left->next,right);
            left->next->prev=left;
            left->prev=NULL;
            return left;
        }
        else{
            right->next=merge(left,right->next);
            right->next->prev=right;
            right->prev=NULL;
            return right;
            
        }
    }
    
    
    struct Node *sortDoubly(struct Node *head) {
        // Your code here
        if(!head || !head->next) return head;
        
        Node* mid=getMiddle(head);
        Node* nextToMid = mid->next;
        // do bhago me divide krdo
        mid->next=NULL;
        nextToMid->prev=NULL;
        Node*left=sortDoubly(head);
        Node*right=sortDoubly(nextToMid);
        return merge(left,right);
        
    
   }
};