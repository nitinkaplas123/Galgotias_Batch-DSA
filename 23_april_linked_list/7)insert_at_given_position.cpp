https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem

Code C++-:
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp=new SinglyLinkedListNode(data);
    if(position==0)
    {
        temp->next=llist;
        return temp;
    }
    else {
       SinglyLinkedListNode* prev=NULL;
       SinglyLinkedListNode* curr=llist;
       for(int i=0;i<position;i++)
       {
           prev=curr;
           curr=curr->next;
       }
       prev->next=temp;
       temp->next=curr;
       return llist;
    }
}


