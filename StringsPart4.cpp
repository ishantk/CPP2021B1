#include<iostream>
using namespace std;

void upperCase(char* input){

}

void replaceCharacters(char* input, char oldChar, char newChar){

}

int main(){
    //char name[] = "John Watson";
    //char* ptr = name;
    char* name = "John Watson";
    cout<<name<<endl;
    cout<<name[0]<<endl; // J

    // Hint as ASCII Table: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

    char sentence[100];
    cout<<"Enter a Sentence: "<<endl;
    cin.get(sentence, 100); // Be Exceptional
    
    upperCase(sentence);    // BE EXCEPTIONAL
    replaceCharacters(sentence, 'E', 'M'); // BM MXCEPTIONAL

    cout<<"Sentence is: "<<sentence<<endl;

    return 0;
}