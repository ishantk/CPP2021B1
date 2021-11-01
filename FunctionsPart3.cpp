#include<iostream>
using namespace std;

int addNumbers(int num1, int num2){
    int sum = num1 + num2;
    return sum; // return is always the last statement in function. this is a termiation statement for function
    cout<<"This is Awesome"<<endl; // UnReachable Code
}

int main(){

    int result = addNumbers(10, 20);
    cout<<"result is: "<<result<<endl;

    return 0;
}