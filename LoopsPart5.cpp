#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=3;i++){
        cout<<"i is: "<<i<<endl;
        for(int j=5;j>0;j--){ // When we have data as Tables -> We need to use Nested Loops
            cout<<j<<"  ";
        }
        cout<<endl;
    }

    return 0;
}