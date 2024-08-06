Solution 1-:
Steps-:
1)Using idea to add two linked list.

Code-:
Node* reverse(Node* head)
    {
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            Node* save=curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        Node* new_head=reverse(head);
        
        Node* curr1=new_head;
        Node* curr2=new Node(1);
        int carry=0;
        Node* dummy=new Node(-1);
        Node* curr=dummy;
        int sum=0;
        
        while(curr1!=NULL || curr2!=NULL || carry!=0)
        {
           if(curr1!=NULL)
           {
               sum+=curr1->data;
               curr1=curr1->next;
           }
           if(curr2!=NULL)
           {
               sum+=curr2->data;
               curr2=curr2->next;
           }
           
           sum+=carry;
           curr->next=new Node(sum%10);
           curr=curr->next;
           carry=sum/10;
           sum=0;
        }
        return reverse(dummy->next);
    }


Solution 2-:
Steps-:
1) Make carry=1
2) and use only head1 as curr1 to traverse the linked list.
3)As we have to do it in constant space so we are updating head->data=sum.

Code-:
Node* reverse(Node* head)
    {
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            Node* save=curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        
        head= reverse(head);
        Node* new_head=head;
        
        int carry=1;
        int sum;
        Node* temp;
        while(head!=NULL)
        {
            sum=carry+head->data;
            head->data=(sum%10);
            temp=head;
            carry=sum/10;
            head=head->next;
        }
        
        if(carry!=0)
        temp->next=new Node(carry);
        return reverse(new_head);
    }