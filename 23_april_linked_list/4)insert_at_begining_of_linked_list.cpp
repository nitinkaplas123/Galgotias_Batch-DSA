In C++
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
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
Node* begin(Node* head,int x)
{
    Node* temp=new Node(x);
    temp->next=head;
    return temp;
}

int main() 
{
  Node* head=new Node(10);
  head->next=new Node(20);
  head->next->next=new Node(30);
  printAll(head);
  cout<<endl;
  Node* new_head=begin(head,5);
  printAll(new_head);
  return 0;
}




In java -:
import java.util.*;
import java.io.*;
import java.lang.*;


class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

public class Main {
    static void printAll(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
    }
    static Node begin(Node head,int x)
    {
        Node temp=new Node(x);
        temp.next=head;
        return temp;
    }
    public static void main(String[] args) {
        Node head = new Node(10);
        head.next = new Node(20);
        head.next.next = new Node(30);
        printAll(head);
        System.out.println();
        Node new_head=begin(head,5);
        printAll(new_head);
    }
}
