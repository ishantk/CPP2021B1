#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = a; // Copy Operation
    int &c = a; // Reference Variable c which is an Another name for a i.e. alias of a

    cout<<"a is: "<<a<<" and address of a is: "<<&a<<endl;
    cout<<"b is: "<<b<<" and address of b is: "<<&b<<endl;
    cout<<"c is: "<<c<<" and address of c is: "<<&c<<endl;

    int *ptr = &c;
    *ptr = 12; // value at ptr is updated with new value i.e. 12

    cout<<"a is: "<<a<<endl; // 12
    cout<<"b is: "<<b<<endl; // 10
    cout<<"c is: "<<c<<endl; // 12

    return 0;
}