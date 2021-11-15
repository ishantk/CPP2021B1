#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int* ptr = &a;
    
    cout<<ptr; // Address of a  // memory address
    cout<<*ptr; // Value At Address of a // 10

    *ptr = 20; // a -> 20

    int x = 10;
    int y = x;
    int &z = x; // x has now a new name i.e. z
    z = 19;

    return 0;
}