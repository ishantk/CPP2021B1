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