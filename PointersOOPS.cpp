#include<iostream>
using namespace std;

class CA{

    public:

    int a;

    CA(){
        a = 10;
    }

    void hello(){
    cout<<"Hello :)\n";
    }

    void add(int n1, int n2){
        int n3 = n1 + n2;
        cout<<"Sum is: "<<n3<<endl;
    }

};

/*void hello(){
    cout<<"Hello :)\n";
}

void add(int n1, int n2){
    int n3 = n1 + n2;
    cout<<"Sum is: "<<n3<<endl;
}*/


int main(){

    //int a = 10;
    //int *ptr = &a;

    // Pointer to the attribute of CA :)
    int CA::*ptr = &CA::a;

    CA obj;
    obj.*ptr = 100;
    cout<<"a in object using pointer is: "<<obj.*ptr<<endl;

    // Function Pointer :)
    /*void (*fptr1)() = &hello;
    void (*fptr2)(int, int) = &add;

    (*fptr1)();
    (*fptr2)(10, 20);*/

    // Function Pointer for Memeber Function of class
    void (CA::*fptr1)() = &CA::hello;
    void (CA::*fptr2)(int, int) = &CA::add;

    (obj.*fptr1)();
    (obj.*fptr2)(10, 20);

}