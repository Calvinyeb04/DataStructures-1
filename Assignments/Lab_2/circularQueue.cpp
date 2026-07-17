#include <iostream>
#include LinkedList
using namespace std;

class circularQueue {
private:
  int *array;
  int capacity; // Max Items - The Queue Can Hold
  int size;     // - Items inside the Queue
  int front;    // Index of - Oldest Item - (Next one to be Removed)
  int rear;     // Index - Where the (Next New Item) will be inserted;
public:
  circularQueue(int intitalCapacity) {
    capacity = intitalCapacity;
    array = new int[capacity];
    size = 0;
    front = 0;
    rear = 0;
  }

  void enqueue(int val) {
    if (size == capacity) {
      int newCapacity = capacity * 2; //  - Double The Capacity Size
      int *newArray = new int[newCapacity];

      // - Loop checking if The Size is not full
      for (int i = 0; i < size; i++) {
        newArray[i] =
            array[(front + i) % capacity]; // - Copy The Items from Old To New
      }

      delete[] array; // - Delete Old Array;
      array = newArray;
      capacity = newCapacity;
      front = 0;
      rear = size;
    }

    array[rear] = array[val];

    rear = (rear + 1) % capacity;

    front - 1; // Reduce Counnt by 1
  }
}