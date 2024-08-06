Queue (STL) in C++

#include <iostream>
#include <queue>

int main() 
{
    // Declaring a queue of integers
    queue<int> myQueue;

    // Adding elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Accessing the front element
    cout << "Front element: " << myQueue.front() << std::endl;

    // Removing elements from the queue
    myQueue.pop();

    // Accessing the new front element
    cout << "Front element after pop: " << myQueue.front() << std::endl;

    // Checking if the queue is empty
    if (myQueue.empty()) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue is not empty\n";
    }

    // Accessing the size of the queue
    cout << "Size of queue: " << myQueue.size() << std::endl;
    return 0;
}


1)  queue<int> declares a queue of integers.
2) .push() is used to add elements to the back of the queue.
3) .front() is used to access the front element of the queue.
4) .pop() is used to remove the front element from the queue.
5) .empty() checks if the queue is empty.
6) .size() returns the number of elements in the queue.