// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Stack.h"
#include "Array.h"

//
// Stack
//
// initializing the stack data which is of type array
// and the top of the stack to 0
template <typename T>
Stack <T>::Stack (void)
	: stack_array(15), stack_top(0)
{
	
}

//
// Stack
//
// Copy constructor for the stack
template <typename T>
Stack <T>::Stack (const Stack & stack)
{
	stack_array(stack);
}

//
// ~Stack
//
// destructor deleting the stack data
template <typename T>
Stack <T>::~Stack (void)
{

}

//
// push
//
// Checking to seee the value of the top of stack
// is greater than the size of stack data ( type array )
// if so then we resize the stack array to accomodate the
// new data
template <typename T>
void Stack <T>::push (T element)
{

	if ( stack_top + 1 > stack_array.size() )
	{
		
		stack_array.resize(stack_top * 2);

	}
	
	stack_top = stack_top + 1;
	
	stack_array.set(stack_top, element);

}

//
// pop
//
// Checks to see if the stack is empty
// if it is then it will throw an exception
// if not then it pops off the element from the
// stack and hence shrinking the stack array
template <typename T>
void Stack <T>::pop (void)
{

	if ( is_empty() )
	{

		throw std::out_of_range("Cannot pop. Stack is empty");

	} else {
		
		stack_array.get(stack_top);
		
		stack_top = stack_top - 1;
	
	}

}


//
// top
//
template <typename T>
T Stack <T>::top(void) const
{
	if ( is_empty() ) {

		std::cout << "Stack is empty." << std::endl;

	}else {
		
		return stack_array.get(stack_top);
		
	}

}

//
// is_empty
//
template <typename T>
bool Stack <T>::is_empty(void) const
{
	if (stack_top != 0) {

		return false;

	} else {
	
		return true;
		
	}

}


//
// operator =
//
// assignment operator
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	
	stack_array.operator=(rhs);

}

//
// clear
//
// clear's the stack by popping of all elements from stack
template <typename T>
void Stack <T>::clear (void)
{

	for (size_t i = 0; i < stack_array.Array_Base<T>::size(); i++)
	{
		if (stack_top != 0) {
			
			pop();
			
		}
	}

}
