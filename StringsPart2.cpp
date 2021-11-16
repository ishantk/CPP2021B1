#include<iostream>
using namespace std;


int main(){

    int array[] = {10, 20, 30, 40, 50};
    char name[] = {'K', 'I', 'A'};

    cout<<"array is: "<<array<<endl; // Address
    cout<<"name is: "<<name<<endl; // KIA
    cout<<"&name is: "<<&name<<endl; // Address
    cout<<"&name[0] is: "<<&name[0]<<endl; // KIA
    cout<<"&name[1] is: "<<&name[1]<<endl;  // IA

    char* ptr = name; 
    //char* ptr = &name;  // error
    cout<<"ptr is: "<<ptr<<endl; // KIA
    cout<<"*ptr is: "<<*ptr<<endl; // K
    ptr++;
    cout<<"ptr now is: "<<ptr<<endl; // IA
    cout<<"*ptr now is: "<<*ptr<<endl; //  I




}