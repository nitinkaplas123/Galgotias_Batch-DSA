
In c++
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

int main() 
{
  Node* head=new Node(10);
  Node* temp1=new Node(20);
  Node* temp2=new Node(30);
  head->next=temp1;
  temp1->prev=head;
  temp1->next=temp2;
  temp2->prev=temp1;
}
















Java-:

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
    public static void main(String[] args) {
        Node head = new Node(10);
        Node temp1 = new Node(20);
        Node temp2 = new Node(30);
        head.next = temp1;
        temp1.prev = head;
        temp1.next = temp2;
        temp2.prev = temp1;
        temp2.next = null;
    }
}
