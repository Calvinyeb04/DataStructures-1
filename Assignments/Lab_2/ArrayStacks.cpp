#include <iostream>
#include LinkedList.cpp;
using namespace std;

class arrayStack {
private:
  int *array;
  int orignalCapacity; // - Max Items The Array Can Hole
  int top;             // - The Top Item - TRACKER

public:
  arrayStack(int intitalCapacity) {
    orignalCapacity = intitalCapacity; // - Set The Orignal Cap to the Int one
    array = new int[orignalCapacity];  // - Tell the Array to Create the Space
                                       // for the Origanl Cap
    top = -1;
  }

  // Methods
  void push(int val) {
    if (top == orignalCapacity - 1) {
      int newCapacity =
          orignalCapacity * 2; // - Create A New Capacity Then Multiply by 2
      int *newArray = new int[newCapacity]; // then set it to the new capacity
      for (int i = 0; i < newCapacity; i++) {
        newArray[i] = array[i]; // - Copy all the Old Data into the New One
      }

      delete[] array; // - Delete Old Array
      // Redirect Old Pointer to the new Bigger One
      array = newArray; // Old Array to New One;
      orignalCapacity = newCapacity;
    }
    // put at top
    array[++top] = val;
  }

  void pop() {
    // is the Stack Empty;  //- To Tracker(Top) has to point to a spot thats
    // empty. // ARRAY SLOTs ARE NUmBERED starting from 0
    if (top == -1) {
      cout << "The List Empty :)" << endl;
      return;
    }
    // Reduce Top(index) to remove last Node
    --top;
  }

  int peek() {
    if (top == -1) {
      return -1; // Beucase of Method Declearation(int).
    }
    return array[top]; // - Return data at current(TOP index)
  }

  void display() {
    if (top == -1) {
      cout << "Nothing To Display" return;
    }
    // Loop Throught the entire List
    for (int i = 0; i >= top; i--) {
      cout << array[i] << "" << endl; // Print each item stored in the array
    }
  }
}