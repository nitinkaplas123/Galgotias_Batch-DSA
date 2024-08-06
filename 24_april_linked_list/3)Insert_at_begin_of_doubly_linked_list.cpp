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
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* insert_begin(Node* head,int x)
{
    Node* temp=new Node(x);
    temp->next=head;
    head->prev=temp;
    return temp;
}


int main() 
{
  Node* head=new Node(10);
  Node* temp1=new Node(20);
  Node* temp2=new Node(30);
  head->next=temp1;
  temp1->prev=head;
  temp1->next=temp2;
  temp2->prev=temp1;
  temp2->next=NULL;
  printAll(head);
  cout<<endl;
  Node* new_head=insert_begin(head,5);
  printAll(new_head);
  return 0;
}


Java -:
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
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }

    static Node insert_begin(Node head, int x) {
        Node temp = new Node(x);
        temp.next = head;
        if (head != null) {
            head.prev = temp;
        }
        return temp;
    }

    public static void main(String[] args) {
        Node head = new Node(10);
        Node temp1 = new Node(20);
        Node temp2 = new Node(30);
        head.next = temp1;
        temp1.prev = head;
        temp1.next = temp2;
        temp2.prev = temp1;
        temp2.next = null;

        printAll(head);
        Node new_head = insert_begin(head, 5);
        printAll(new_head);
    }
}
