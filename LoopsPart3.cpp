#include<iostream>
using namespace std;

// Loops - We can write iterative tasks
int main(){

    int number = 0;
    cout<<"Enter a Number: ";
    cin>>number;

    int index = 1;
    do{
        cout<<number<<" "<<index<<"'s are "<<number*index<<endl;
        index++;
    }while(index<=10); // Condition Checking Happens in the End -> Exit Control Loop

    bool yesNo = true;

    do{
        cout<<"Welcome to SBI ATM\n";
        cout<<"Enter PIN\n";
        cout<<"Transaction Finished\n";

        cout<<"Would you like to make another transaction (1/0)";
        cin>>yesNo;
        
    }while(yesNo);

    return 0;
}