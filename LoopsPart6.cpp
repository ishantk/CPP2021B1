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

// Assignment: Print the Pattern
/*

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5


1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15





*/