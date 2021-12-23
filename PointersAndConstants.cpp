#include<iostream>
using namespace std;

int main(){

    const int a = 10; // read only variable
    //a = 20; // value cannot be changed :)
    int b = 20;
    int c = 30;

    // POINTER TO A CONSTANT :)
    //int* ptr1 = &a; // Err
    const int* ptr1 = &a; // now ok

    int* ptr2 = &b; // OK
    ptr2 = &c;      // OK as pointer can contain address and is a variable

    // CONSTANT POINTER -> Pointing to a variable
    int* const ptr3 = &b;
    //ptr3 = &c; // Err

    // CONSTANT POINTER -> Pointing to a constant
    const int* const ptr4 = &a;


    return 0;
}