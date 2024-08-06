Solution 1-:
Steps-:
1)Using count the total no. of nodes.
2)Then traversal till count-n.


Code-: Java
int Count(Node head)
{
        int count=0;
        while(head!=null)
        {
            count++;
            head=head.next;
        }
        return count;
}

int getNthFromLast(Node head, int n)
{
    	int count=Count(head);
    	
    	if(count<n) return -1;
    	
    	Node curr=head;
    	for(int i=0;i<count-n;i++)
    	{
    	    curr=curr.next;
    	}
    	return curr.data;
}


Solution 2-:
Steps-:
1)slow=head and fast at n step ahead
2)means there is n node gap bw slow and fast node
3)now move slow and fast with 1 move and if(fast==NULL) that means slow is at target position.
4)if(n>no. of nodes) then return -1


Code-:
int getNthFromLast(Node head, int n)
{
    	Node fast=head;
    	int i=0;
    	while(i<n)
    	{
    	   if(fast==null)
    	   return -1;
    	   fast=fast.next;
    	   i++;
    	}
    	
    	Node slow=head;
    	while(fast!=null)
    	{
    	    slow=slow.next;
    	    fast=fast.next;
    	}
    	return slow.data;
}