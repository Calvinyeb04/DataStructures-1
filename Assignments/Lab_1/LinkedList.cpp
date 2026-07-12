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

    void deleteAtBack(){
      //Check if(List = Empty)
      if(head == nullptr){
        return;
      }
      //Check if- It only contain: One Node
      if(head == tail){
        //Set Both headers = NULL
        head = nullptr;
        tail = nullptr;
        return;
      }

      //FIND (2nd to Last) Node
        ///Create Temp - Pointer
      Node * tempCurrent = head; //set to head- so we can travel the list from head to tail 
      //While(State: Tell (Temp-Pointer)- to save a spot in line) - set = tail
      while(tempCurrent -> next!= tail){
        //Tell (Temp Pointer to go next inline)
        tempCurrent = tempCurrent -> next;
      }
      //Delete Last Node(Elements)
      delete tail;
      //Tell Tail: to move to where the current-pointer is standing
      //Set Tail to where the current pointer is  
      tail = tempCurrent;//Now the last spot in the LIST
      //Tell tail to not allow anymore ELEMENTS AFTER THEM
       tempCurrent -> next = nullptr;
    }

    void deleteAtFront(){
      Node * backdoorTemp = head;
      if(head == nullptr){
        return;
      }

      head = head -> next;

      if(head == nullptr){
          tail == nullptr;
      }
      
      delete backdoorTemp;
    }


    void display(){
      if(head == nullptr){
        cout << "List Is Empty:" << endl;
        return;
      }

      Node* displayPacket = head;
      while(displayPacket != nullptr){
        cout << displayPacket -> val;
      

      if(displayPacket -> next != nullptr){
        cout << "->" << endl;
      }

      displayPacket = displayPacket -> next;
    }
  }
  cout << endl;

  }
};