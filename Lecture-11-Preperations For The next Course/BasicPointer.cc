/********************************************************************
 * Course: Modolar Programming in C++
 * Lecture: 1 - Pointers
 * File: BasicPointers.cc
 * 
 * Author: Yaniv Gabay
 * Date: 2024-03-24
 * 
 * Overview:
 * Show some examples of using files
 * 
 * Notes:
 * 
 *******************************************************************/

// ---------- Include Section ----------
#include <iostream>
// Add more #include directives as needed

// ---------- Using Section ----------
using std::cout;
using std::cin;
using std::endl;

// ---------- Constants ----------
const int MAX_SIZE = 100;
// Add more constants as needed

// ---------- Structs ----------

// ---------- Function Prototypes ----------
void exampleFunction(int parameter);
// Add more function prototypes as needed

// ---------- Main Function ----------
int main() {
    // pointer is a variable that holds a memory address
    //think of it as an arrow pointing to a memory address
    // we can use it to access the value in that memory address
    // we can also use it to change the value in that memory address
    // we can also use it to create dynamic memory allocation
    // we will learn about that in the next course

    int *first_pointer; // the type is int* , which means it holds a memory address of an int
    //the name is first_pointer
    //we can also do int* first_pointer;
    //we created a pointer, but it is not pointing to anything yet (to garbage?)
    //so how we can make it point to something?
    //we can use the & operator
    int number = 5;
    first_pointer = &number;
    //now first_pointer is pointing to the memory address of number
    //we can access the value in that memory address by using * operator
    cout << "printing the value in the memory address that first_pointer is pointing to:----->>>>>" << endl;
    cout << (*first_pointer) << endl;
    cout << "printing the value of number:" << endl;
    cout << number << endl;

   
    (*first_pointer)+=5; // same as number += 5;
    cout << "after adding += 5 to *first_pointer" << endl;
    cout << *first_pointer << endl;

    //we can also change the value in that memory address
    *first_pointer = 25;
    cout << "printing number after *first_pointer = 25" << endl;
    cout << number << endl;
     cout << "printing the value of number:" << endl;
    cout << number << endl;
    ///// think why is this good?? why is it bad????
    // we can send pointers to functions
    //



    //we can also create a pointer to a pointer
    //we will not go over it
    

    return 0;
}

// ---------- Functions ----------
void exampleFunction(int parameter) {
    // Example function implementation
    cout << "Parameter value: " << parameter << endl;
}
// Add more functions as needed