#include<iostream>
using namespace std;

int choice(char* data){

    int choice = 5;

    // return choice as 1 if data has add in it as a word
    // return choice as 2 if data has subtract in it as a word
    // return choice as 3 if data has multiply in it as a word
    // return choice as 4 if data has divide in it as a word
    // return choice as 5 if data has nothing out of all above

     int idx = 0;
    while(data[idx] != '\0'){
       


        idx++;
    }

    return choice;
}

int main(){
    
    int a=0;
    int b=0;
    int c = 0;

    char answer[256];
    cout<<"Hi, My Name is John. What can i do for you ?"<<endl;
    cin.get(answer, 256); 
    // hello, i wish to add numbers -> 1
    // hello john, i would like to multiply the data -> 3
    // awesome, can i  subtract 2 numbers ? -> 2
    // thank you, whats my name ? -> 5

    int result = choice(answer);

    if(result != 5){
        cout<<"Enter Two Numbers: "<<endl;
        cin>>a;
        cin>>b;
    }

    if(result == 1){
        cout<<"As per your wish, let me add numbers for you"<<endl;
        c = a+b;
    }else if(result == 2){
        cout<<"As per your wish, let me subtract numbers for you"<<endl;
        c = a-b;
    }else if(result == 3){
        cout<<"As per your wish, let me multiply numbers for you"<<endl;
        c = a*b;
    }else if(result == 4){
        cout<<"As per your wish, let me divide numbers for you"<<endl;
        c = a/b;
    }else{
        cout<<"Sorry! I Didn not understand you. Please try again";
    }

    if(result != 5){
        cout<<"Result is: "<<c<<endl;
    }

    return 0;
}