#include<iostream>
using namespace std;

// The piece of code in our program is being repeatedly used :)
int main(){

    int scores[5] = {10, 20, 30, 150, 70};
    int covidCases[5] = {1110, 21230, 12430, 2350, 19170};

    for(int i=0;i<5;i++){
        cout<<scores[i]<<"  ";
    }
    cout<<endl;

     for(int i=0;i<5;i++){
        cout<<covidCases[i]<<"  ";
    }

    cout<<endl;

    int max = scores[0];
    for(int i=1;i<5;i++){
        if(scores[i] > max){
            max = scores[i];
        }
    }

    cout<<"Max in Scores is: "<<max<<endl;

    max = covidCases[0];
    for(int i=1;i<5;i++){
        if(covidCases[i] > max){
            max = covidCases[i];
        }
    }

    cout<<"Max in covidCases is: "<<max<<endl;

    return 0;
}