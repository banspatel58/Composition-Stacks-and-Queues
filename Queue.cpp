// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Queue.h"

//
// Queue
//
// initializing the queue data that helps store data
// front which keeps track of the beginning(first element) of the queue
// end which keeps track of the end element(last element)  in the queue
template <typename T>
Queue <T>::Queue(void)
	: queue_array(5), front(0), end(0)
{

}

//
// Queue
//
// copy constructor for the queue
template <typename T>
Queue <T>::Queue(const Queue & queue)
{
	queue_array(queue);
}

//
// ~Queue
//
template <typename T>
Queue <T>::~Queue(void)
{
	
}

//
// enqueue
//
// adds element to the queue, checks if the index of last element 
// is greater than the array size if so, resizes the array to accomodate 
// more data
template <typename T>
void Queue <T>::enqueue(T element)
{
	// Checking to see if we have reached at the end of the queue
	// and we still have space up front from elements removed/dequeued 
	// previously. If so then we start adding elements up front
	// to utilize spaces up front.
	if( front > 0 && end == queue_array.size() ) 
	{	

		end = 0;
		 
	}
		
	else if ( end + 1 > queue_array.size() )
	{

		queue_array.resize(end + 5);

	}
	end = end + 1;
	
	queue_array.set(end, element);

}

//
// dequeue
//
// Removes element from the front of the queue
// and shrinks the array.
// if queue is empty throws an exception
template <typename T>
T Queue <T>::dequeue(void)
{	
	
	// Checking to see if the front of the queue is same as the 
	// size of the queue then we start dequeueing from the beginning
	if ( front == queue_array.size() )
	{
		
		front = 0;
		
	}
	else if ( is_empty() )
	{

		throw std::out_of_range("No elements in the queue. Queue is empty.");

	}
	
	front = front + 1;
	
	return queue_array.get(front);

}

//
// operator =
//
// asignment operator
template <typename T>
const Queue <T> & Queue <T>::operator = (const Queue & rhs)
{

	queue_array.operator=(rhs);
	
}

//
// clear
//
// clear's the queue by dequeueing all the elements
template <typename T>
void Queue <T>::clear(void)
{

	for (size_t i = 0; i < queue_array.Array_Base<T>::size() ; i++)
	{
		if(!is_empty()){
			
			dequeue();
			
		}
	}

}
