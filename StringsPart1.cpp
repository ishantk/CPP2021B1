#include<iostream>
using namespace std;


int main(){
    //char saluatation[] = {'M', 'r', '.'} ;
    char saluatation[] = "Ms. " ; // String is enetered at the time of creation
    char name[20]; // String will be enetered later
    cout<<"Enter Your Name: "<<endl;
    cin>>name; // Will read from User but terminate whenever we introduce space
    cout<<"You Enetered: "<<name<<endl;
    
    //name = "Leo"; // Strings cannot be reinitialized | error
    
    // We can re-read the name again using cin
    cout<<"Enter name Again"<<endl;
    cin>>name;
    cout<<saluatation;
    int i = 0;
    while(name[i] != '\0'){
        cout<<name[i]<<" ";
        i++;
    }
    cout<<endl;
    cout<<"i is: "<<i<<endl;

    return 0;
}