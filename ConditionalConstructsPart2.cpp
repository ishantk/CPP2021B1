#include<iostream>
using namespace std;

int main(){

    int baseFare = 100;
    int typeOfCab = 0;
    cout<<"1. Micro Cab\n";
    cout<<"2. Mini Cab\n";
    cout<<"3. Sedan Cab\n";
    cout<<"4. Bike \n";
    cout<<"5. Shared Cab\n";
   
    cout<<"Enter the Type of Cab: ";
    cin>>typeOfCab;

    cout<<"You Entered: "<<typeOfCab<<endl;
    // Ladder if/else
    /*if(typeOfCab == 1){
        baseFare -= 40;
        cout<<"You Booked Micro Cab. Your Base Fare is: "<<baseFare<<endl;
    }else if(typeOfCab == 2){
        baseFare -= 20;
        cout<<"You Booked Mini Cab. Your Base Fare is: "<<baseFare<<endl;
    }else if(typeOfCab == 3){
        baseFare += 50;
        cout<<"You Booked Sedan Cab. Your Base Fare is: "<<baseFare<<endl;
    }else if(typeOfCab == 4){
        baseFare -= 70;
        cout<<"You Booked Bike. Your Base Fare is: "<<baseFare<<endl;
    }else if(typeOfCab == 5){
        baseFare -= 50;
        cout<<"You Booked Shared Cab. Your Base Fare is: "<<baseFare<<endl;
    }else{
        cout<<"Please Select the Cab to Proceed"<<endl;
    }*/

    // Convert Ladder if/else into Switch Case
    switch(typeOfCab){
        case 1:
            baseFare -= 40;
            cout<<"You Booked Micro Cab. Your Base Fare is: "<<baseFare<<endl;
            break;
        case 2:
            baseFare -= 20;
            cout<<"You Booked Mini Cab. Your Base Fare is: "<<baseFare<<endl;    
            break;
        default:
            cout<<"Please Select the Cab to Proceed"<<endl;
    }

    return 0;
}