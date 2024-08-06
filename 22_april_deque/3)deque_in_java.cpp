import java.util.Deque;
import java.util.ArrayDeque;

public class Main {
    public static void main(String[] args) {
        // Create an empty deque
        Deque<Integer> myDeque = new ArrayDeque<>();

        // Add elements to the back of the deque
        myDeque.addLast(10);
        myDeque.addLast(20);
        myDeque.addLast(30);

        // Add elements to the front of the deque
        myDeque.addFirst(5);
        myDeque.addFirst(15);

        // Print elements of the deque
        System.out.print("Deque after adding elements: ");
        for (int num : myDeque) {
            System.out.print(num + " ");
        }
        System.out.println();

        // Access elements by index (not directly supported by Deque)
        // You may need to convert the Deque to an array or use an iterator

        // Remove elements from the back of the deque
        int removedElement = myDeque.removeLast();
        System.out.println("Removed element from the back: " + removedElement);

        // Remove elements from the front of the deque
        removedElement = myDeque.removeFirst();
        System.out.println("Removed element from the front: " + removedElement);

        // Print elements of the deque after removal
        System.out.print("Deque after removing elements: ");
        for (int num : myDeque) {
            System.out.print(num + " ");
        }
        System.out.println();

        // Check if deque is empty
        if (myDeque.isEmpty()) {
            System.out.println("Deque is empty");
        } else {
            System.out.println("Deque is not empty");
        }

        // Get the size of the deque
        System.out.println("Size of deque: " + myDeque.size());

        // Clear the deque
        myDeque.clear();
        System.out.print("Deque after clearing: ");
        for (int num : myDeque) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}


   C++                       Java 
1)push_back()               addLast()
2)dq.back()                 dq.peekLast()
3)dq.pop_back()             dq.removeLast()
4)dq.front()                dq.peekFirst()
5)dq.push_front()            dq.addFirst()
6)dq.pop_front()            dq.removeFirst()