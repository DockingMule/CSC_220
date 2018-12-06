/* This file implements Stack member functions.   stack.cpp

-------------------------------------------------------*/
#include "Stack.h"
#include <iostream>
using namespace std;

//---------Definition of Stack constructor---------------
Stack::Stack()
{
	//Default Constructor
	myTop = -1;
}

//---------Definition of empty()-------------------------
bool Stack::empty() const
{
	return (myTop == -1);
}

//---------Definition of push()--------------------------
void Stack::push(const StackElement & value)
{
	if (myTop < STACK_CAPACITY - 1)
	{
		++myTop;
		myArray[myTop] = value;
	}
	else
	{
		cerr << "*** Stack full -- can't add new value Must increase value of STACK_CAPACITY in Stack.h ***\n";
		exit(1);
	}
}

//---------Definition of pop()--------------------------
StackElement Stack::pop()
{
	StackElement value;

	if (!empty())
	{
		value = myArray[myTop];
		myTop--;
	}
	else
	{
		cerr << "*** Stack is empty --can't remove a value ***\n";
		exit(1);
	}
	return value;
}
