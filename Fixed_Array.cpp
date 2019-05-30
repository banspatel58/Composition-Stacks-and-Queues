// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Fixed_Array: Default Constructor
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
	: Array_Base<T>(N)
{

}

//
// Fixed_Array: Copy Constructor
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
	: Array_Base<T>(arr)
{
	
	

}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
	:Array_Base<T>(M), Array_Base<T>(arr)
{
	
	

}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
	: Array_Base<T>::fill(fill)
{

}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
	
	Array_Base<T>::operator = (rhs);

}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{
	Array_Base<T>::cur_size_ = M;
	Array_Base<T>::operator = (rhs);

}