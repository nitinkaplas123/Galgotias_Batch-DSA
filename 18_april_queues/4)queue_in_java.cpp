Queue operations in Java-:






The Queue interface is implemented by several classes in Java, including LinkedList, ArrayDeque, and 
PriorityQueue. Each of these classes provides different implementations of the queue interface, with
different performance characteristics and features.

Overall, the Queue interface is a useful tool for managing collections of elements in a specific order,
and is widely used in many different applications and industries.


public class QueueExample {
    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<>();
 
        // add elements to the queue
        queue.add("apple");
        queue.add("banana");
        queue.add("cherry");
 
        // print the queue
        System.out.println("Queue: " + queue);
 
        // remove the element at the front of the queue
        String front = queue.remove();
        System.out.println("Removed element: " + front);
 
        // print the updated queue
        System.out.println("Queue after removal: " + queue);
 
        // add another element to the queue
        queue.add("date");
 
        // peek at the element at the front of the queue
        String peeked = queue.peek();
        System.out.println("Peeked element: " + peeked);
 
        // print the updated queue
        System.out.println("Queue after peek: " + queue);
    }
}


Queue: [apple, banana, cherry]
Removed element: apple
Queue after removal: [banana, cherry]
Peeked element: banana
Queue after peek: [banana, cherry, date]




// Java program to demonstrate a Queue
 
import java.util.LinkedList;
import java.util.Queue;
 
public class QueueExample {
 
    public static void main(String[] args)
    {
        Queue<Integer>q=new LinkedList<>();
 
        // Adds elements {0, 1, 2, 3, 4} to
        // the queue
        for (int i = 0; i < 5; i++)
        q.add(i);
 
        // Display contents of the queue.
        System.out.println("Elements of queue "+ q);
 
        // To remove the head of queue.
        int removedele = q.remove();
        System.out.println("removed element-"+ removedele);
 
        System.out.println(q);
 
        // To view the head of queue
        int head = q.peek();
        System.out.println("head of queue-" + head);
 
       
        int size = q.size();
        System.out.println("Size of queue-" + size);
    }
}

Output-:
Elements of queue [0, 1, 2, 3, 4]
removed element-0
[1, 2, 3, 4]
head of queue-1
Size of queue-4
