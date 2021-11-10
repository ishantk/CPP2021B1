#include<iostream>
using namespace std;

int main(){

    int age = 10;
    int* ptr = &age;

    int array[5] = {10, 20, 30, 40, 50};
    cout<<array<<endl;
    cout<<&array[0]<<endl;
    cout<<&array[1]<<endl;
    cout<<&array[2]<<endl;

    int* myPtr = array;
    cout<<"myPtr is: "<<myPtr<<endl;
   

    cout<<"*myPtr is: "<<*myPtr<<endl; // Value at myPtr -> 10

    myPtr++;
    cout<<"myPtr now is: "<<myPtr<<endl;
    cout<<"*myPtr now is: "<<*myPtr<<endl;

    int* pointer = array; // copying the address of 0th index of array
    for(int i=0;i<5;i++){
        *pointer = *pointer + 3;
        cout<<*pointer<<"  ";
        pointer++;
    }
    cout<<endl;

    for(int idx=0;idx<5;idx++){
        cout<<array[idx]<<"  ";
    }
    cout<<endl;
   
    return 0;
}