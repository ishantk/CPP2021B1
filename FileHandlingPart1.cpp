#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string line;
    //ifstream in("students.txt");
    //ifstream in("DataTypes.cpp");

    fstream file("DataTypes.cpp", ios::in); // Work as Input
    //fstream file("DataTypes.cpp", ios::out); // Work as Output
    //fstream file("DataTypes.cpp", ios::app); // Work as Output with append mode enabled

    if(file.is_open()){
        while(getline(file, line)){
            cout<<line<<endl;
        }
    }else{
        cout<<"File does not exist"<<endl;
    }
    
    // Release the memory resources
    file.close();

    return 0;
}

/*
    mini project:
    Consider we have customers entering into mall
    You need to take details of customer as input i.e. name, phone, gender and temperature
    Save the data inside the file as in whenever new cutomer comes

*/