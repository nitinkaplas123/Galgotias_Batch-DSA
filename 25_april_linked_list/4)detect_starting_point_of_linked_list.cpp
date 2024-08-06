Solution 1-:
Steps-:

Java 
public static int findFirstNode(Node head){
        HashSet<Node>s=new HashSet<>();
        Node curr=head;
        while(curr!=null)
        {
            if(s.contains(curr))
            return curr.data;
            else
            s.add(curr);
            curr=curr.next;
        }
        return -1;
}

C++
int findFirstNode(Node* head)
{
        unordered_set<Node*>s;
        Node* curr=head;
        while(curr!=NULL)
        {
            if(s.find(curr)!=s.end())
            return curr->data;
            else
            s.insert(curr);
            curr=curr->next;
        }
        return -1;
}



Solution 2-:
Steps-:
Using tortouise method
1)if there is loop so we find slow==fast.
2)now slow at head of the list and fast at which we find slow==fast
3)Now slow and fast move 1 step
4)When we reach slow==fast means this is the top of starting point of the loop.


Code-:
public static int findFirstNode(Node head){
       Node slow=head;
       Node fast=head;
       
       while(fast!=null && fast.next!=null)
       {
           slow=slow.next;
           fast=fast.next.next;
           if(slow==fast)
           break;
       }
       if(slow!=fast) return -1;
       
       slow=head;
       while(slow!=fast)
       {
           slow=slow.next;
           fast=fast.next;
       }
       return slow.data;
}