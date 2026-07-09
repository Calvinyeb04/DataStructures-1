#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *next;

  Node(int data) {
    val = data;
    next = nullptr
  }

  class LinkedList {
  private:
    Node *head;
    Node *tail;

  public:
    LinkedList() {
      head = nullptr;
      tail = nullptr;
    }

    void insertAtFront(int val) {
      Node *tempHold = new Node(val);
      tempHold->next = head;
      head = tempHold;

      if (tail == nullptr) {
        tail = tempHold;
      }
      // Create a TEMPHOLD - new Node *
      // if Tail = Empty. Then SET TAIL = temphold
    }

    void insertAtBack() {
      Node *tempHold = new Node(val);
      if (head == nullptr) {
        head->next = tempHold;
        tail->next = tempHold;
      } else {
        // YO Tail -> Your Next(open space in line) - reserve that for me
        // since Tail - > next reserved the seat
        //  Tell tempHold to fill it(tail = tempHold)
        tail->next;
        tail = tempHold;
      }
    }

    void deleteAtBack() {
      // check if the head is empty
      if (head == nullptr) {
        return;
      }
      // check if there is only one node
      if (head == tail) {
        /// mean only have on node in the list
        head = nullptr;
        tail = nullptr;
        return;
      }

      // Find the 2nd to last ELements
    }
  }
};