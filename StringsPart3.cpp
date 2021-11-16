#include<iostream>
using namespace std;


int main(){

    //char name[32];
    string name;
    cout<<"Enter Name: "<<endl;
    //cin.get(name, 32);
    getline(cin, name);
    cout<<"name is: "<<name<<endl;

    return 0;
}