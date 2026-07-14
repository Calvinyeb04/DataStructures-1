#include <iostream>
using namespace std;
#include Linkedlist.cpp;

class arrayStack{
    private:
        int * array;
        int capacity;
        int top;
    public:
        arrayStack(int Originalcapacity){
            capacity = Originalcapacity;
            arrayStack = new int[capacity];
            top = -1;
        }

       void push(int val){
        // 1. Check if array (stack) is full
        if(top == capacity - 1){
            // 2. Create a new array double the size
            int newCapacity = capacity * 2;
            int* newArray = new int[newCapacity];
            
            // 3. Copy all data 
            for(int i = 0; i < capacity; i++){
                newArray[i] = array[i];
            }

            // 4. Delete the old array
            delete[] array;

            // 5. Update the old variables to point to the new ones
            array = newArray;
            capacity = newCapacity;
        }

        // 6. Push the new value (This MUST be outside the if block!)
        array[++top] = val;
    }

}