#include <iostream>
#include "LinkedList.cpp"
using namespace std;

class circularQueue {
private:
  int *array;
  int capacity;
  int size;
  int front;
  int rear;

public:
  circularQueue(int tempCapacity) {
    size = 0;
    front = 0;
    rear = 0;
  }

  void enqueue(int val) {
    if (size == capacity) {
      int newCapacity = capacity * 2;
      int *newArray = new int[newCapacity];

      for (int i = 0; i < size; i++) {
        newArray[i] = array[(front + i) % capacity];
      }
      array = newArray;
      capacity = newCapacity;
      front = 0;
      size = rear;
    }

    array[rear] = val;
    rear = (rear + 1) % capacity;
    size++;
  }

  void dequeue() {
    if (size == 0) {
      cout << "The List is Empty" << endl;
      return;
    }

    front = (front + 1) % capacity;
    size--;
  }

  int peek() {
    if (size == 0) {
      cout << "List is Empty" << endl;
      return -1;
    }

    return array[front];
  }

  void display() {
    if (size == 0) {
      cout << "Nothing There To Display" << endl;
      return;
    }

    for (int i = 0; i < size; i++) {
      cout << array[(front + i) % capacity] << endl;
    }
  }
};