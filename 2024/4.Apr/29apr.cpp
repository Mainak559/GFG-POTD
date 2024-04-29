//https://www.geeksforgeeks.org/problems/remove-every-kth-node/1


/* Link list Node 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      if(K==1)return NULL;
      Node *temp=head,*prev=NULL;
      int c=1;
      while(temp){
          if(c==K){
              prev->next=temp->next;
              c=0;
          }
          else prev=temp;
          c++;
          temp=temp->next;
      }
      return head;
    }
};