# Stacks-and-Queues-Using-Arrays

Building Data Structures Using Array:

1. Array_Base:
  There are some methods in Array (Dynamic) that shouldn't be accessed by Fixed Arrays and because both belong to a family of Arrays, we     use liskov's principle to add an abstract layer called Array_Base that is useful and accessible to both Dynamic Arrays and Fixed Arrays.
  
2. Array:
  I use inheritance as the dynamic array is a base array (array_base in this case). The dynamic arrays could be resized, shrinked, sliced and performs all other functions that a normal array does.
  
3. Fixed Array: 
  I use inheritance as the fixed array is a base array (array_base in this case). The fixed arrays cannot be resized, shrinked & sliced.
  
4. Stacks:
  Stacks work on the priciple of LIFO (Last In First Out). Stack has an array so we use polymorphism (in order to use the dynamic array) to build stack.
  
5. Queues:
  Queues work on the priciple of FIFO (First In First Out). Queue has an array so we use polymorphism (in order to use the dynamic array) to build Queue.
