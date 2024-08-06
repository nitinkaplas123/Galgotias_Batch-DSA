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
Node* insert_at_begin(Node* head,int x)
{
    Node* temp=new Node(x);
    if(head==NULL)
    {
        temp->next=NULL;
        return temp;
    }
    
    Node* curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return temp;
}



int main() 
{
  Node* head=new Node(10);
  head->next=new Node(20);
  head->next->next=new Node(30);
  head->next->next->next=head;
  printAll(head);
  cout<<endl;
  Node* new_head=insert_at_begin(head,5);
  printAll(new_head);
  return 0;
}



In Java -:
import java.util.*;

class Node {
    int data;
    Node next;
    Node prev;

    Node(int x) {
        data = x;
        prev = null;
        next = null;
    }
}

public class Main {
    static void printAll(Node head) {
        if (head == null) {
            return;
        }
        Node curr = head;
        do {
            System.out.print(curr.data + " ");
            curr = curr.next;
        } while (curr != head);
        System.out.println();
    }

    static Node insert_at_begin(Node head, int x) {
        Node temp = new Node(x);
        if (head == null) {
            temp.next = null;
            return temp;
        }

        Node curr = head;
        while (curr.next != head) {
            curr = curr.next;
        }
        curr.next = temp;
        temp.next = head;
        return temp;
    }

    public static void main(String[] args) {
        Node head = new Node(10);
        head.next = new Node(20);
        head.next.next = new Node(30);
        head.next.next.next = head;

        printAll(head);
        Node new_head = insert_at_begin(head, 5);
        printAll(new_head);
    }
}
