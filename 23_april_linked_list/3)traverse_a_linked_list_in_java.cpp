import java.util.*;
import java.io.*;
import java.lang.*;


class Node {
    int data;
    Node next;

    Node(int x)
    {
        data = x;
        next = null;
    }
}

public class Main 
{
    static void printAll(Node head) 
    {
        while (head != null) 
        {
            System.out.print(head.data + " ");
            head = head.next;
        }
    }

    public static void main(String[] args) 
    {
        Node head = new Node(10);
        head.next = new Node(20);
        head.next.next = new Node(30);
        printAll(head);
    }
}
