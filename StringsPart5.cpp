#include<iostream>
using namespace std;

/*void upperCase(char data[20]){
    cout<<"data is: "<<data<<endl;
    int idx = 0;
    while(data[idx] != '\0'){
        if(data[idx] >= 97 && data[idx]<=122){
            data[idx] = data[idx]-32;
        }
        idx++;
    }
}*/

void upperCase(char* data){
    cout<<"data is: "<<data<<endl;
    int idx = 0;
    while(data[idx] != '\0'){
        if(data[idx] >= 97 && data[idx]<=122){
            data[idx] = data[idx]-32;
        }
        idx++;
    }
} 

void replace(char* data, char oldChar, char newChar){
    cout<<"data is: "<<data<<endl;
    int idx = 0;
    while(data[idx] != '\0'){
        if(data[idx] == oldChar){
            data[idx] = newChar;
        }
        idx++;
    }
} 

int main(){

    char ch = 'A';
    ch = ch + 32;
    cout<<"ch now is: "<<ch<<endl;

    char name[20];
    cout<<"Enter Your Name:"<<endl;
    cin>>name;
    cout<<"You Eneterd: "<<name<<endl;

    upperCase(name);
    replace(name, 'J', 'K');

    cout<<"Name now is: "<<name<<endl;

    return 0;
}