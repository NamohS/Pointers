# Pointers

#### 1][Pointers with arrays ](pointerswitharrays.cpp)
* The first line of code, #include <iostream>, tells the compiler to include the iostream header file, which contains declarations for input and output operations.

* The next line of code, using namespace std;, tells the compiler to use the std namespace, which contains commonly used functions and types.

* The next line of code, int main (), declares the main function. This is the function that is called when the program starts.

* The next line of code, int var[5]=10;, declares an array var of 5 integers and initializes all the elements to 10.

* The next line of code, int *ptr=&var;, declares a pointer ptr that points to the array var.

* The next four lines of code, cout<<var<<endl; //value of var cout<<*ptr<<endl; //value at address cout<<&var<<endl; //given by ptr cout<<ptr<<endl;//address of var, print the value of the array var, the value at the address pointed to by ptr, the address of the array var, and the address of the pointer ptr respectively.

INPUT:

      10

OUTPUT:

      10
      0x7ffee46067a0
      0x7ffee46067a0
      0x7ffee46067a8
