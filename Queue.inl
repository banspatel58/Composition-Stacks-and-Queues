// -*- C++ -*-
// $Id: Stack.inl 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

//
// size
//
// returns the size of the queue
template <typename T>
inline
size_t Queue <T>::size(void) const
{

	return queue_array.size();

}

//
// is_empty
//
// checks to see if the queue is empty
template <typename T>
inline
bool Queue <T>::is_empty(void) const
{

	return (end == front);

}
