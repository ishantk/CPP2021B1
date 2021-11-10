#include<iostream>
using namespace std;

int main(){

    int array[5] = {10, 20, 30, 40, 50};
    for(int i=0;i<5;i++){
        //cout<<*array<<"  ";
        //array++; // error
        cout<<*(array + i)<<"  ";
    }
    cout<<endl;
    return 0;
}