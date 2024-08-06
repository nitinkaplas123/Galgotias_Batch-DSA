https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

Solution 1-:
Java-:
public static Node reverse(Node head, int k)
{
        Node curr=head;
        Node prev=null;
        int count=0;
        
        while(curr!=null && count<k)
        {
            Node save=curr.next;
            curr.next=prev;
            prev=curr;
            curr=save;
            count++;
        }
        
        if(curr!=null)
        {
            Node rest_head=reverse(curr,k);
            head.next=rest_head;
        }
        return prev;
}
