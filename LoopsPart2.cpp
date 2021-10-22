#include<iostream>
using namespace std;

// Loops - We can write iterative tasks
int main(){

    int i = 1;
    while(i <= 3){
        cout<<"i is: "<<i<<endl;
        i++;

        int j=3;
        // Nesting of Loops
        // Inner Loop or Nested Loop
        while(j>0){
            cout<<j<<" :) ";
            j--;
        }
        cout<<endl;
    }

    return 0;
}