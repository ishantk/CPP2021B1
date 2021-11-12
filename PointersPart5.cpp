#include<iostream>
using namespace std;

// Function Taking Pointer as Input
void getData(int* ptr, int size){
    cout<<"ptr is: "<<ptr<<endl;
    for(int i=0;i<size;i++){
        *ptr = *ptr + 5;
        ptr++;
    }
}

int main(){

    int array[] = {10, 20, 30, 40, 50};
    cout<<"array is: "<<array<<endl;
    getData(array, 5);
    for(int i=0;i<5;i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;
    return 0;
}