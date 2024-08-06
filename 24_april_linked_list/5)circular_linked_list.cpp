#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data=x;
        prev=NULL;
        next=NULL;
    }
};
void printAll(Node* head)
{
    cout<<head->data<<" ";
    Node* curr=head->next;
    while(curr!=head)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main() 
{
  Node* head=new Node(10);
  head->next=new Node(20);
  head->next->next=new Node(30);
  head->next->next->next=head;
  printAll(head);
  return 0;
}