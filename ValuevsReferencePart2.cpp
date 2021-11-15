#include<iostream>
using namespace std;

void swap(int &x, int &y){  // Pass By Reference
//void swap(int x, int y){  // Pass By Value
    cout<<"x is: "<<x<<endl; // 10
    cout<<"y is: "<<y<<endl; // 20

    int z = x;
    x = y;
    y = z;

     cout<<"x now is: "<<x<<endl; // 10
    cout<<"y now is: "<<y<<endl; // 20

}

// Passing the Pointers
void swapAgain(int* x, int* y){  
    cout<<"*x is: "<<*x<<endl;  // 10
    cout<<"*y is: "<<*y<<endl;  // 20

    //*x = *x + *y;  // 30
    //*y = *x - *y;  // 10
    //*x = *x - *y;  // 20 

    *x = *x * *y;  // 200
    *y = *x / *y;  // 10
    *x = *x / *y;  // 20

}


int main(){

    int a = 10;
    int b = 20;

    cout<<"a is: "<<a<<endl; // 10
    cout<<"b is: "<<b<<endl; // 20

    //swap(a, b);
    swapAgain(&a, &b); // Calling by Address

    cout<<"a now is: "<<a<<endl; // 20
    cout<<"b now is: "<<b<<endl; // 10

}