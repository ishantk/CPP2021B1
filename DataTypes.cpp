#include<iostream>
using namespace std;

/*
    Data Types 
    Number
    Text

    Fundamental Data Types
        Numbered Data Types

            short -> 2 bytes 

            int -> integer numbers 4 bytes => both positive and negative
            unsigned int -> 4 bytes => positive numbers

            long -> 8 bytes

            10/3 -> 3

            float -> floating points | 4 bytes
            10.0/3.0 -> 3.33
            unsigned float

            double -> 8 bytes

            char -> 1 byte

            bool -> 1 byte

            void -> empty -> 0 byte
*/

// entry point for the program
// i.e. execution of the program will begin from main
// So, whatever we will write in main, will be executed
int main(){ // { -> Definition or Scope or Boundary of main}

    // Storage Container Creation Statement
    int age = 16;

    // Update Statement
    age = 24;
    // Hence we can say age is a Variable :)

    char ch = 'A';

    float pi = 3.14;

    // Read Operation
    cout<<"age is:"<<age<<endl;
    cout<<"ch is:"<<ch<<endl;
    cout<<"pi is:"<<pi<<endl;

    return 0; // automatically all the container will be deleted from memory
    // Hence variables are also known as automatic variables
}