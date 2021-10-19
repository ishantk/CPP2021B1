#include<iostream>
using namespace std;

int main(){

    float speed=0;
    float time=0;

    cout<<"Enter Speed in km/h: "<<endl;
    cin>>speed;

    cout<<"Enter Time in seconds: "<<endl;
    cin>>time;

    float mpsSpeed = speed * (5.0/18.0);
    float length = mpsSpeed * time;

    cout<<"Length of train is: "<<length<<endl;

    return 0;
}