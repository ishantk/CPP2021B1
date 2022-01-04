#include<iostream>
using namespace std;

namespace myspace{
    int x = 10;

    void add(int num1, int num2){
        cout<<"Addition of "<<num1<<" and "<<num2<<" is: "<<(num1+num2)<<endl;
    }

    class Student{

    };
}

using namespace myspace;

int main(){

    //std::cout<<"Hello. This is CPP program"<<std::endl;

    cout<<"Hello. This is CPP program"<<endl;

    // cout<<"x is: "<<myspace::x<<endl;
    // myspace::add(10, 20);

    cout<<"x is: "<<x<<endl;
    add(10, 20);

    return 0;
}