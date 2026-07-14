#include <iostream>
using namespace std;
#include LinkedList.cpp;

class Stack{
    private:
        LinkedList list;
    
    public:
        void Push(int val){
            List.insertAtFront(val);
        }

        void Pop() {
            List.deleteAtFront;
        }

        int Peek()(
            return List.peekAtFront();
        )

        void display(){
            List.display();
        } 
    
}


class Queues{
    private:
        LinkedList list;
    
    public:
        void enqueue(int val){
            List.insertAtBack(val);
        }

        void dequeue(){
            List.deleteAtFront();
        }

        void display(){
            List.display();
        } 
}