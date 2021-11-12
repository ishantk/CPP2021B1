#include<iostream>
using namespace std;

void updateData(int x){ // Pass By Value
    cout<<"x before is: "<<x<<endl; // 10
    x += 10; // 20
    cout<<"x after is: "<<x<<endl; // 20
}

void updateDataAgain(int& x){ // Pass By Reference
    cout<<"x before is: "<<x<<endl; // 10
    x += 10; // 20
    cout<<"x after is: "<<x<<endl; // 20
}

int main(){

    int a = 10;
    cout<<"a is: "<<a<<endl; // 10
    //updateData(a); // Call By Value
    updateDataAgain(a);
    cout<<"a finally is: "<<a<<endl; // 20

    return 0;
}