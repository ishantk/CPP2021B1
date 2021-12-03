#include<iostream>
using namespace std;

void upperCase(){
    cout<<"Upper Case"<<endl;
}

void lowerCase(){
    cout<<"Lower Case"<<endl;
}

// int argc, char** argv -> Command Line Arguments or Input to the main function
int main(int argc, char** argv){ // char**  -> Array of Strings

    cout<<"argc is: "<<argc<<endl;
    cout<<"*argv is: "<<*argv<<endl;

    for(int i=0;i<argc;i++){
        cout<<argv[i]<<endl;
    }

    if(argc > 2){
        upperCase();
    }else{
        lowerCase();
    }

    return 0;
}

// Assignment: Date Formatting with Command Line Args

// Create two functions other than main
// 1st function will convert the format of date to indian
// 2st function will convert the format of date to american

// ./a.out 22/1/2019 indian
// output -> 22/1/2019

// ./a.out 22/1/2019 american
// output -> 2019/1/22

// ./a.out 2019/1/22 indian
// output -> 22/1/2019