#include<iostream>
using namespace std;

// POINTER: It is a variable which holds the address of another variable
//                    RULE: Data Type must match means int* will point to int

int main(){

    int age = 10;
    cout<<"age is: "<<age<<endl;
    cout<<"Address of age is: "<<&age<<endl;

    char ch = 'A';

    int* ptr = &age;
    char* cptr = &ch;

    cout<<"ptr is: "<<ptr<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;
    cout<<"Value at Ptr is: "<<*ptr<<endl;

    // Indirect Access of Memory
    *ptr = 100;
    cout<<"age now is: "<<age<<endl;

    // Pointer to Pointer
    int** pptr = &ptr;
    cout<<"pptr is: "<<pptr<<endl; // Address of ptr
    cout<<"*pptr is: "<<*pptr<<endl; // Address of age
    cout<<"**pptr is: "<<**pptr<<endl; // Value of age

    return 0;
}