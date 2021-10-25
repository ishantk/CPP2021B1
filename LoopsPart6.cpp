#include<iostream>
using namespace std;

int main(){

    int floorNumber = 0;
    cout<<"Welcome to the Lift\n";
    cout<<"Enter the Floor Numner: \n";
    cin>>floorNumber;
    for(int floor=0;floor<=10;floor++){
        cout<<"Floor #"<<floor<<" Arrived\n";
        if(floorNumber == floor){
            cout<<"Your Floor has Arrived\n";
            break;
        }
    }

    // HW: Explore the keyowrd [continue] in the loops :)
    //         Create a small program on it

    return 0;
}    