#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char fname[20], lname[20];
    cout<<"Enter First Name"<<endl;
    cin.getline(fname, 20);
    cout<<"Enter Last Name"<<endl;
    cin.getline(lname, 20);

    // Concatenation Opertation
    strcat(fname, lname); // Merge characters of lname into fname

    cout<<"fname is: "<<fname<<endl;
    cout<<"lname is: "<<lname<<endl;

    char fullName[50];
    strcpy(fullName, fname);
    cout<<"Full Name is: "<<fullName<<endl;
    int length = strlen(fullName);
    cout<<"Length of Full Name is: "<<length<<endl;

    // Assignment: Explore More String Functions
    // convert the String into array of words. eg: String -> this is awesome
    // output expected is an array -> {this, is, awesome}

}