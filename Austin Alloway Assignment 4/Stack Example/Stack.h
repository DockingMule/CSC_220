/*--------------------------------------Stack.h------------------------------------------

This header file defines a stack data type.
Basic operations:

   constructor:  Costructs an empty stack
   empty:        Check if the stack is empty
   push:         Modifies a stack by adding a value at the top
   pop:          Remove an element from top of the stack
*/

#ifndef STACK_H
#define STACK_H
using namespace std;

const int STACK_CAPACITY = 20;
typedef int StackElement;

class Stack
{
private:
	/******* Data Memebrs  **************/

	StackElement myArray[STACK_CAPACITY];
	int myTop;

public:
	/******* Function Memebrs  **************/

	Stack();			//Constructor - An empty stack has been constructed.
	bool empty() const;				//Check if the stack is empty.
	void push(const StackElement & value);	//Adds an element to a stack.
	StackElement pop();				//Remove an element from top of the stack
};

#endif
