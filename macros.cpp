// # -> pre processpor
//      to process something before compilation starts
// directive -> 1. include -> to include a file
//              2. define  -> to define constants and functions
//              3. pragma ( Assignment :) )

// #include => pre-processor directive

#include<iostream>

// Macros: define :)
#define SIZE 10
#define PI 3.14
#define area(length, breadth) (length*breadth)
#pragma startup hello
#pragma exit bye

using namespace std;

void hello(){ // will be executed before main
    cout<<"This is hello"<<endl;
}

void bye(){ // after main
    cout<<"This is bye"<<endl;
}

int main(){

    int array[SIZE];
    cout<<"Area of Rectangle is: "<<area(12, 15)<<endl;

    return 0;
}