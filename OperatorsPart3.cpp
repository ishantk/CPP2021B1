#include<iostream>
using namespace std;

// Bitwise Operators
// & | ^

// Shift Operators
// >>, <<

// Ternary Operators
// ? :

// Unary 
// ++ and --
// int x = 0;
// x++;

// Binary
// + and -
// int x = 10;
// int y = 20;
// int z = x + y;


// Ternary 
// ?:

int main(){

    int x = 8;          // 0 0 0 0  1 0 0 0
    int y = 10;         // 0 0 0 0  1 0 1 0

    //int z = x & y;    // 0 0 0 0  1 0 0 0 -> 8
    //int z = x | y;    // 0 0 0 0  1 0 1 0 -> 10
    int z = x ^ y;      // 0 0 0 0  0 0 1 0 -> 2
    cout<<"z is: "<<z<<endl;

    // HW: Explore where these operators are used in real world :)

    int physics = 75;
    int mathematics = 80;

    int greater = (physics > mathematics) ? physics : mathematics;
    cout<<"Greater is: "<<greater<<endl;


    return 0;
}