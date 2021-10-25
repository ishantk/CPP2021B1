#include<iostream>
using namespace std;

int main(){

    int number = 0;
    cout<<"Enter a Number: ";
    cin>>number;

    for(int index=1; index<=10 ; index++){
     //for(int index=1,  j=0;(index<=10 && j>0); index++, j--){    
        cout<<number<<" "<<index<<"'s are "<<number*index<<endl;
    }

    // index = 7; error -> index will be deleted as the for loop finishes -> Memory Optimization

    return 0;
}