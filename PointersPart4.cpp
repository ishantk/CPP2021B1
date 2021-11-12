#include<iostream>
using namespace std;

// Function Returing a Pointer
int* getData(){
    int array[] = {10, 20, 30, 40, 50};
    cout<<"array is: "<<array<<endl;
    return array;
}

int main(){

    int* ptr = getData();
    cout<<"ptr is: "<<ptr<<endl;
    cout<<"*ptr is: "<<*ptr<<endl;

    return 0;
}