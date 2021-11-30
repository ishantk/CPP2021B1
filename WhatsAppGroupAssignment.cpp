#include<iostream>
using namespace std;


class User{
    string name;
    string phone;
};

class WhatsAppGroup{ // HAS Users | 1 to many
    
    string groupTitle;
    int memberCount;
    User* users; // 1 to many


};

int main(){

    int num;
    string data, name;

    cout<<"Enter Number: "<<endl;
    cin>>num;
    cout<<"You Eneterd: "<<num<<endl;

    // If we are reading strings after integers, just to an empty read
    cin.get();
 
    cout<<"Enter data: "<<endl;
    getline(cin, data);
    cout<<"data is: "<<data<<endl;

     cout<<"Enter name: "<<endl;
    getline(cin, name);
    cout<<"name is: "<<name<<endl;

    return 0;
}