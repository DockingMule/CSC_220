//Austin Alloway
//CSC 220
//Assignment 4
//create a calculator using stacks to convert from base 10 to base 2
#include <iostream>
using namespace std;
#include "stack.h"

/*  Main Program */

void main(void)
{
	int startingNumber;
	int currentNumber;
	int remainder;
	StackElement popitem;		//data type defined in the stack.h 
	Stack s;

	system("cls");						//clear output window

	cout << "What number would you like to convert from base ten to base two?: ";
	cin >> startingNumber;
	currentNumber = startingNumber;

	while (currentNumber != 0) {
		remainder = currentNumber % 2;
		s.push(remainder);
		currentNumber = currentNumber / 2;
	}

	while (!(s.empty())){
		popitem = s.pop();      // Pop (Delete) an element from the stack 
		cout << "                 " << popitem << endl;
	}
	system("pause");
	return;
}
