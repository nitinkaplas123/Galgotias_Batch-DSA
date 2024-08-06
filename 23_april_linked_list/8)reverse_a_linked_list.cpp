C++ Code-:

struct Node* reverseList(struct Node *head)
{
        Node* curr=head;
        Node* prev=NULL;
        
        while(curr!=NULL)
        {
            Node* save=curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
        }
        return prev;
}


Java-:
Node reverseList(Node head)
{
        Node prev=null;
        Node curr=head;
        
        while(curr!=null)
        {
            Node save=curr.next;
            curr.next=prev;
            prev=curr;
            curr=save;
        }
        return prev;
}