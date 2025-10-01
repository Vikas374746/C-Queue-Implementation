# EXPERIMENT NO – 18

* Aim: To study and implement Queue in C++ for managing data in First-In-First-Out (FIFO) order.

* Tools Used: IDE, C++ compiler, arrays or linked lists, enqueue and dequeue operations.

* Theory:

In C++, a Queue is a linear data structure that follows the FIFO (First-In-First-Out) principle. The element inserted first is the one removed first, similar to a real-world queue.

-Front – Points to the first element of the queue.

-Rear – Points to the last element of the queue.

-Enqueue – Operation to insert an element at the rear.

-Dequeue – Operation to remove an element from the front.

-Queues can be implemented using arrays, linked lists, or the STL queue library.

🔹 Key Features of Queue:

* Works on FIFO principle.

* Supports insertion at the rear and deletion from the front.

* Can be implemented as:

-Simple Queue

-Circular Queue

-Double-Ended Queue (Deque)

-Priority Queue

🔹 *Advantages of Queue:*

* Provides an organized way to manage data sequentially.

* Useful in scheduling, buffering, and resource management.

* Forms the basis for advanced structures like Priority Queues and Deques.


# Add, Delete the members in the queue. Check the queue is overflow or empty:

This program demonstrates how to implement a queue data structure using an array. It supports standard queue operations like enqueue, dequeue, and display. Overflow and underflow conditions are handled properly.

ALGORITHM:

1> Start

2> Define Queue class with:

* Private members: arr[SIZE], front, rear

* Public methods:

enqueue(value) : Add element at rear, check for overflow

dequeue() : Remove element from front, check for underflow

display() : Display all elements from front to rear

3> In main function

* Create Queue object q

* Enqueue elements 10, 20, 30

* Display queue

* Dequeue element and display queue

* Enqueue more elements and handle overflow

* Display queue after each operation

4> End
  

# Conclusion:

Queue implementation in C++ demonstrates how data can be managed in FIFO order. It allows efficient scheduling and resource handling through enqueue and dequeue operations. While simple queues may have limitations like overflow and underflow, variations such as circular queues and priority queues provide more efficient solutions for real-world applications.
