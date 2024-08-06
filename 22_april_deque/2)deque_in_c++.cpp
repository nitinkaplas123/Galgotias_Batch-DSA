#include <iostream>
#include <deque>

int main() {
    // Create an empty deque
    std::deque<int> myDeque;

    // Add elements to the back of the deque
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_back(30);

    // Add elements to the front of the deque
    myDeque.push_front(5);
    myDeque.push_front(15);

    // Print elements of the deque
    std::cout << "Deque after adding elements: ";
    for (int num : myDeque) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Access elements by index
    std::cout << "Element at index 2: " << myDeque[2] << std::endl;

    // Remove elements from the back of the deque
    int removedElement = myDeque.back();
    myDeque.pop_back();
    std::cout << "Removed element from the back: " << removedElement << std::endl;

    // Remove elements from the front of the deque
    removedElement = myDeque.front();
    myDeque.pop_front();
    std::cout << "Removed element from the front: " << removedElement << std::endl;

    // Print elements of the deque after removal
    std::cout << "Deque after removing elements: ";
    for (int num : myDeque) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if deque is empty
    if (myDeque.empty()) {
        std::cout << "Deque is empty" << std::endl;
    } else {
        std::cout << "Deque is not empty" << std::endl;
    }

    // Get the size of the deque
    std::cout << "Size of deque: " << myDeque.size() << std::endl;

    // Clear the deque
    myDeque.clear();
    std::cout << "Deque after clearing: ";
    for (int num : myDeque) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
