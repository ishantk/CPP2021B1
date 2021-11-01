#include<iostream>
using namespace std;

// What is a Function ?
// Function is a piece of code which may or may not take input
// It executes the piece of code in a sequence
// So, piece of logic which will be repeatedly used can be put within a function

/*
    f(x) = x*x + 1
    f(a, b) = a*a + b*b + 2*a*b
*/

// How to create a Function ?
// ReturnType NameofFunction(InputList){

//}

// addNumbers(num1, num2) = num1 + num2
// Defining a Function
void addNumbers(int num1, int num2){
    int sum = num1 + num2;
    cout<<"Sum is: "<<sum<<endl;
}

// Declaring a Function
void multiplyNumbers(int num1, int num2);

int main(){

    // Executing a Function
    // Calling a Function
    addNumbers(10, 20);
    addNumbers(10, -20);
    addNumbers(4, -5);
    multiplyNumbers(5, 6);
    return 0;
}

void multiplyNumbers(int num1, int num2){
    int multiplication = num1 * num2;
    cout<<"Multiplication is: "<<multiplication<<endl;
}
