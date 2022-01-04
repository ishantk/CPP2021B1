#include<iostream>
using namespace std;

int main(){

    cout<<"Lucky Number App Started"<<endl;

    int cashBacks[9] = {30, 50, 20, 10, 90, 100, 70, 99, 88};
    int luckyNumber = 0;
    
    cout<<"Enter Your Lucky Number: "<<endl;
    cin>>luckyNumber;
    try{
        if(luckyNumber < 0 || luckyNumber >9){
            cout<<"OOPS!! Lucky Number Cannot be processed\n";
            //throw 0; // from here control will directly go to catch block
            throw "Invalid Input";
            // i.e. code written below in try will now not be executed
        }
        int cashBack = cashBacks[luckyNumber-1];
        cout<<"Congratulations. You earned a Cashback of \u20b9"<<cashBack<<endl;
    }//catch(int result){
    catch(char const* result){
        cout<<result<<endl;
        //cout<<"Sorry. You earned a Cashback of \u20b9"<<result<<endl;
    }

    cout<<"Lucky Number App Finished"<<endl;

    return 0;
}