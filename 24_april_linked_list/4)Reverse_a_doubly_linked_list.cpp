C++
Code-:

Node* reverseDLL(Node * head)
    {
       Node* prev=NULL;
       Node* curr=head;
       
       while(curr!=NULL)
       {
           Node* save=curr->next;
           curr->next=prev;
           curr->prev=save;
           prev=curr;
           curr=save;
       }
       return prev;
    }


Java Code-:
public static Node reverseDLL(Node  head)
{
    Node curr=head;
    Node prev=null;
    
    while(curr!=null)
    {
        Node save=curr.next;
        curr.next=prev;
        curr.prev=save;
        
        prev=curr;
        curr=save;
    }
    return prev;
}