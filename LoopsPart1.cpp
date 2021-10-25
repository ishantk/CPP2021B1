#include<iostream>
using namespace std;

// Loops - We can write iterative tasks
int main(){

    int number = 0;
    cout<<"Enter a Number: ";
    cin>>number;

    /*cout<<number<<" 1's are "<<number*1<<endl;
    cout<<number<<" 2's are "<<number*2<<endl;
    cout<<number<<" 3's are "<<number*3<<endl;
    cout<<number<<" 4's are "<<number*4<<endl;
    cout<<number<<" 5's are "<<number*5<<endl;
    cout<<number<<" 6's are "<<number*6<<endl;
    cout<<number<<" 7's are "<<number*7<<endl;
    cout<<number<<" 8's are "<<number*8<<endl;
    cout<<number<<" 9's are "<<number*9<<endl;
    cout<<number<<" 10's are "<<number*10<<endl;*/

    int index = 1;
    while(index <= 10){ // Entry Control Loop => Condition Testing Happens Before we enter the loop
        cout<<number<<" "<<index<<"'s are "<<number*index<<endl;
        index+=2;
    }


    return 0;
}