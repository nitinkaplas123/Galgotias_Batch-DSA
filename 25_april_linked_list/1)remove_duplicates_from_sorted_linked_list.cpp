https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

Solution 1-:

Code-:
Node removeDuplicates(Node head)
{
	   if(head.next==null)
	   return head;
	   
	   Node prev=head;
	   Node curr=head.next;
	   
	   while(curr!=null)
	   {
	       if(curr.data==prev.data)
	       prev.next=curr.next;
	       else
	       prev=curr;
	       
	       curr=curr.next;
	   }
	   return head;
}