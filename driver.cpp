#include "Array_Base.h"
#include "Array.h"
#include "Fixed_Array.h"
#include "Queue.h"
#include "Stack.h"
#include <iostream>
#include <stdexcept>

int main(int argc, char * argv[])
{
	
	std::cout << "Introducing a Array_Base" << std::endl;
	Array_Base<int> array (8, 5);
	
	int a1 = 16;

	array.set(1, 1);
	array.set(2, 4);
	array.set(3, 9);
	array.set(4, 16);
	array.set(5, 25);
	array.set(6, 16);
	array.set(7, 9);
	array.set(8, 4);
	
	std::cout << "Value at index 1 is: " << array.get(1) << std::endl;
	std::cout << "Value at index 2 is: " << array.get(2) << std::endl;
	std::cout << "Value at index 3 is: " << array.get(3) << std::endl;
	std::cout << "Value at index 4 is: " << array.get(4) << std::endl;
	std::cout << "Value at index 5 is: " << array.get(5) << std::endl;
	std::cout << "Value at index 6 is: " << array.get(6) << std::endl;
	std::cout << "Value at index 7 is: " << array.get(7) << std::endl;
	std::cout << "Value at index 8 is: " << array.get(8) << std::endl;

	std::cout << "Value 16 is at index: " << array.find(a1) << std::endl;
	std::cout << "Value 16 is at index starting from index 5: " << array.find(a1, 5) << std::endl;
	
	std::cout << "Building a TestArray " << std::endl;
	Array_Base<int> TestArray(array);
	std::cout << "Building a TestArray2 " << std::endl;
	Array_Base<int> TestArray2(15, 30);
	
	std::cout << "Checking array equality " << std::endl;
	if ( array == TestArray2 ){
		
		std::cout << "Array array == TestArray2" << std::endl;
		
	}else {
		
		std::cout << "Array array != TestArray2" << std::endl;
		
	}
	

	std::cout << "***********************************************" << std::endl;
	
	std::cout << "Introducing a fixed array (type Array_Base)" << std::endl;

	Array_Base<char> * fixed_array;
	fixed_array = new Fixed_Array<char, 5>();
	fixed_array->fill('B');
	std::cout << "Size of the Fixed Array is: " << fixed_array->size() << std::endl;

	std::cout << "Element at index 3 of a Fixed Array is: " << fixed_array->get(3) << std::endl;
	
	Fixed_Array<char, 8> Test;
	Test.fill('A');
	std::cout << "Size of the Fixed Array is: " << Test.size() << std::endl;

	std::cout << "Element at index 3 of a Fixed Array is: " << Test.get(3) << std::endl;
	
	Fixed_Array<char, 8> AnotherTest(Test);
	std::cout << "Size of the Fixed Array is: " << AnotherTest.size() << std::endl;

	std::cout << "Element at index 3 of a Fixed Array is: " << AnotherTest.get(3) << std::endl;
	
	std::cout << "Testing assignment operator" << std::endl;
	
	Fixed_Array<char, 8> FinalTest;
	
	FinalTest = Test;
	std::cout << "Size of the Fixed Array is: " << AnotherTest.size() << std::endl;

	std::cout << "Element at index 3 of a Fixed Array is: " << AnotherTest.get(3) << std::endl;
	
	

	std::cout << "***********************************************" << std::endl;
	
	std::cout << "Introducing an Array (type Array_Base)" << std::endl;
	Array_Base<int> * A1;
	A1 = new Array<int>(10, 8);
	A1->fill(8);
	std::cout << "Size of the of a Dynamic Array is: " << A1->size() << std::endl;
	std::cout << "Element at index 3 of a Dynamic Array is: " << A1->get(3) << std::endl;


	A1->set(1, 25);
	A1->set(2, 35);
	A1->set(3, 45);
	A1->set(4, 55);
	A1->set(5, 65);
	A1->set(6, 75);
	A1->set(7, 85);
	A1->set(8, 95);
	A1->set(9, 15);
	A1->set(10, 5);
	
	std::cout << std::endl;
	
	std::cout << "Element at index 10 of a Dynamic Array is: " << A1->get(10) << std::endl;
	std::cout << "Element at index 9 of a Dynamic Array is: " << A1->get(9) << std::endl;
	std::cout << "Element at index 1 of a Dynamic Array is: " << A1->get(1) << std::endl;
	std::cout << "Element at index 2 of a Dynamic Array is: " << A1->get(2) << std::endl;
	std::cout << "Element at index 3 of a Dynamic Array is: " << A1->get(3) << std::endl;
	std::cout << "Element at index 4 of a Dynamic Array is: " << A1->get(4) << std::endl;
	std::cout << "Element at index 5 of a Dynamic Array is: " << A1->get(5) << std::endl;
	std::cout << "Element at index 6 of a Dynamic Array is: " << A1->get(6) << std::endl;
	std::cout << "Element at index 7 of a Dynamic Array is: " << A1->get(7) << std::endl;
	std::cout << "Element at index 8 of a Dynamic Array is: " << A1->get(8) << std::endl;

	std::cout << "Size of a Dynamic Array is: " << A1->size() << std::endl;
	

	std::cout << "***********************************************" << std::endl;

	std::cout << "Introducing a new array (type Array) " << std::endl;
	
	Array<char> A2 (8);
	std::cout << "Size of the of the new Array is: " << A2.size() << std::endl;

	A2.set(1, 'M');
	A2.set(2, 'O');
	A2.set(3, 'R');
	A2.set(4, 'N');
	A2.set(5, 'I');
	A2.set(6, 'N');
	A2.set(7, 'G');
	A2.set(8, '!');

	std::cout << "Element at index 1 of the Array is: " << A2.get(1) << std::endl;
	std::cout << "Element at index 2 of the Array is: " << A2.get(2) << std::endl;
	std::cout << "Element at index 3 of the Array is: " << A2.get(3) << std::endl;
	std::cout << "Element at index 4 of the Array is: " << A2.get(4) << std::endl;
	std::cout << "Element at index 5 of the Array is: " << A2.get(5) << std::endl;
	std::cout << "Element at index 6 of the Array is: " << A2.get(6) << std::endl;
	std::cout << "Element at index 7 of the Array is: " << A2.get(7) << std::endl;
	std::cout << "Element at index 8 of the Array is: " << A2.get(8) << std::endl;
	
	std::cout << "Reversing the array" << std::endl;
	
	A2.reverse();
	
	std::cout << "Element at index 1 of the Array is: " << A2.get(1) << std::endl;
	std::cout << "Element at index 2 of the Array is: " << A2.get(2) << std::endl;
	std::cout << "Element at index 3 of the Array is: " << A2.get(3) << std::endl;
	std::cout << "Element at index 4 of the Array is: " << A2.get(4) << std::endl;
	std::cout << "Element at index 5 of the Array is: " << A2.get(5) << std::endl;
	std::cout << "Element at index 6 of the Array is: " << A2.get(6) << std::endl;
	std::cout << "Element at index 7 of the Array is: " << A2.get(7) << std::endl;
	std::cout << "Element at index 8 of the Array is: " << A2.get(8) << std::endl;
	
	A2.resize(15);
	
	std::cout << "Size of the of the Array after resize is: " << A2.size() << std::endl;
	
	std::cout << "***********************************************" << std::endl;

	std::cout << "Introducing a Stack that has an array " << std::endl;
	
	Stack<char> S1;

	S1.push('B');
	S1.push('A');
	S1.push('N');
	S1.push('S');
	S1.push('A');
	S1.push('R');
	S1.push('I');
	S1.push(' ');
	S1.push('S');
	S1.push(' ');
	S1.push('P');
	S1.push('A');
	S1.push('T');
	S1.push('E');
	S1.push('L');
	
	// Test Clearing stack
	//S1.clear();
	//std::cout << "Cleaning the stack" << S1.size() << std::endl;

	std::cout << "Size of Stack is: " << S1.size() << std::endl;
	std::cout << "Top value of stack with size 16 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "First Pop: " << std::endl;
	std::cout << "Top value of stack with size 15 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Second Pop: " << std::endl;
	std::cout << "Top value of stack with size 14 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Third Pop: " << std::endl;
	std::cout << "Top value of stack with size 13 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Fourth Pop: " << std::endl;
	std::cout << "Top value of stack with size 12 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Fifth Pop: " << std::endl;
	std::cout << "Top value of stack with size 11 is: " << S1.top() << std::endl;
	
	
	S1.pop();
	
	std::cout << "Sixth Pop: " << std::endl;
	std::cout << "Top value of stack with size 10 is: " << S1.top() << std::endl;
	
	
	S1.pop();
	
	std::cout << "Seventh Pop: " << std::endl;
	std::cout << "Top value of stack with size 9 is: " << S1.top() << std::endl;
	
	
	S1.pop();
	
	std::cout << "Eigth Pop: " << std::endl;
	std::cout << "Top value of stack with size 8 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Ninth Pop: " << std::endl;
	std::cout << "Top value of stack with size 7 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Tenth Pop: " << std::endl;
	std::cout << "Top value of stack with size 6 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Eleventh Pop: " << std::endl;
	std::cout << "Top value of stack with size 5 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Twelveth Pop: " << std::endl;
	std::cout << "Top value of stack with size 4 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Thirteenth Pop: " << std::endl;
	std::cout << "Top value of stack with size 3 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "Fourteenth Pop: " << std::endl;
	std::cout << "Top value of stack with size 2 is: " << S1.top() << std::endl;
	
	S1.pop();
	
	std::cout << "***********************************************" << std::endl;

	std::cout << "Introducing a Queue that has an array " << std::endl;
	
	Queue<int> Q1;

	Q1.enqueue(25);
	Q1.enqueue(625);
	Q1.enqueue(35);
	Q1.enqueue(1225);
	Q1.enqueue(45);
	Q1.enqueue(2025);
	Q1.enqueue(55);
	Q1.enqueue(3025);
	Q1.enqueue(65);
	Q1.enqueue(4225);
	
	// Test Clearing queue
	//Q1.clear();
	//std::cout << "Cleaning the queue" << std::endl;
	
	std::cout << "Size of Queue is: " << Q1.size() << std::endl;
	std::cout << "Top value of Queue with size 16 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "First Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 15 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Second Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 14 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Third Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 13 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Fourth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 12 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Fifth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 11 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Sixth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 10 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Seventh Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 9 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Eigth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 8 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Ninth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 7 is: " << Q1.dequeue() << std::endl;	
	
	Q1.enqueue(1);
	Q1.enqueue(4);
	Q1.enqueue(9);
	Q1.enqueue(16);
	Q1.enqueue(25);
	Q1.enqueue(36);
	Q1.enqueue(49);
	Q1.enqueue(64);
	Q1.enqueue(81);
	Q1.enqueue(100);
	
	std::cout << "Tenth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 6 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Eleventh Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 5 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Twelveth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 4 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Thirteenth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 3 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Fourteenth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 2 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Fifteenth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 1 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Sixteenth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 0 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Seventeenth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 1 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Eightteenth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 2 is: " << Q1.dequeue() << std::endl;
	
	std::cout << "Nineteenth Dequeue: " << std::endl;
	std::cout << "Top value of Queue with size 3 is: " << Q1.dequeue() << std::endl;
	
	// Test removing elements from empty queue
	std::cout << "Twenteenth Dequeue: " << std::endl;
	//std::cout << "Top value of Queue with size 4 is: " << Q1.dequeue() << std::endl;
	
	// Determining the size of the queue
	std::cout << "Size of the queue is: " << Q1.size() << std::endl;
	
	
	return 0;
}