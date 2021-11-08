#include<iostream>
using namespace std;

void readDataInArray(int array[][5], int rows, int cols){
    for(int r=0;r<rows;r++){
        cout<<"Enter Data for Team "<<(r+1)<<endl;
        for(int c=0;c<cols;c++){
            cin>>array[r][c];
        }
    }
}

void printArray(int array[][5], int rows, int cols){
  for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            cout<<array[r][c]<<"  ";
        }
        cout<<endl;
    }
}

int getMaxPoints(int array[][5], int rows, int cols){

    int max = 0;
    
    return max;
}

int main(){

    int group1 [6][5];
    int group2 [6][5];

    // Array of Array of Arrays
    // 3 D Array 
    //int worldCupTeamsTable[2][6][5];

    cout<<"Enter Data for Teams of Group1"<<endl;
    readDataInArray(group1, 6, 5);
    
    cout<<"Enter Data for Teams of Group1"<<endl;
    readDataInArray(group2, 6, 5);

    cout<<"Data for Group1 Teams: "<<endl;
    readDataInArray(group1, 6, 5);

    cout<<"Data for Group2 Teams: "<<endl;
    readDataInArray(group2, 6, 5);

    cout<<"Max Points in Group1: "<<getMaxPoints(group1, 6, 5);
    cout<<"Max Points in Group2: "<<getMaxPoints(group2, 6, 5);

    return 0;
}