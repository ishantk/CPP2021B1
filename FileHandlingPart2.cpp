#include<iostream>
#include<fstream>
using namespace std;

int main(){

    fstream stream;
    stream.open("students.txt", ios::in);

    // 2 pointers
    // getPointer-> for read 
    // putPointer -> for write

    stream.seekg(5, ios::beg);   // for read operation
    //stream.seekp(5, ios::beg); // for write operation
    int pos1 = stream.tellg();
    int pos2 = stream.tellp();

    cout<<"pos1 i.e. for get pointer is: "<<pos1<<endl;
    cout<<"pos2 i.e. for put pointer is: "<<pos2<<endl;

    char data[5];
    stream.read(data, 4);
    cout<<"data is: "<<data<<endl;

    return 0;
}