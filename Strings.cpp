#include<iostream>
using namespace std;

int main(){

    char ch = 'A';

    // Array of Characters
    // String
    char name[] = "John Watson";
    //char name[20] = "John Watson";

    cout<<"ch is: "<<ch<<endl;
    cout<<"name is: "<<name<<endl;
    cout<<"name[0] is: "<<name[0]<<endl;

    int count = 0;

    for(int i=0;i<12;i++){
        cout<<name[i]<<"  ";
        if(name[i] == 'o'){
            count++;
        }
    }
    cout<<endl;
    cout<<"o is occuring "<<count<<" times"<<endl;

    return 0;
}