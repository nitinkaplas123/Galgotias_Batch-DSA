
Solution 1-:
Steps-:
1)Count the total nodes.
2)using prev and curr we delete the middle element of linked list.


Code-:
int Count(Node* head)
{
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
}

Node* deleteMid(Node* head)
{
       
       int count=Count(head);
       if(count==1)
       return head;
       Node* prev=NULL;
       Node* curr=head;
       for(int i=0;i<count/2;i++)
       {
           prev=curr;
           curr=curr->next;
       }
       prev->next=curr->next;
       return head;
}


In java-:
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
    
Node deleteMid(Node head) {
       int count=Count(head);
       if(count==1)
       return head;
       Node prev=null;
       Node curr=head;
       for(int i=0;i<count/2;i++)
       {
           prev=curr;
           curr=curr.next;
       }
       prev.next=curr.next;
       return head;
}


Solution 2-:
Steps-:
1)Using tortuoise method.
2)Slow and fast pointer.


In Java-:
Node deleteMid(Node head) {
      if(head.next==null)
      return null;
       
       Node slow=head;
       Node fast=head;
       Node prev=null;
       while(fast!=null && fast.next!=null)
       {
           prev=slow;
           slow=slow.next;
           fast=fast.next.next;
       }
       prev.next=slow.next;
       return head;
}