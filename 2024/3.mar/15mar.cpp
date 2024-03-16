//https://www.geeksforgeeks.org/problems/linked-list-that-is-sorted-alternatingly/1






/*
class Node {
    int data;
    Node next;
    
    public Node (int data){
        this.data = data;
        this.next = null;
    }
}
*/

class Solution {
    
    public Node sort(Node head){
        if(head == null || head.next == null)
        return head;
        Node temp = head;
        int count =0 , i=0;
        
        while(temp != null)
        {
            count++;
            temp=temp.next;
        }
        int arr[] = new int[count];
        temp = head;
        while(i < count)
        {
            arr[i] = temp.data;
            temp = temp.next;
            i++;
        }
        Arrays.sort(arr);
        temp=head;
        for( i =0 ; i<count;i++)
        {
            temp.data = arr[i];
            temp=temp.next;
        }
        return head;
    }
    
  


}