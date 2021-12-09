#include<iostream>
#include<cstring>

using namespace std;

int main(){
    
    char username[] = "john@example.com";
    char password[] = "john123";

    char userNameAsInput[20];
    char passwordAsInput[20];

    cout<<"Enter UserName: "<<endl;
    cin>>userNameAsInput;

    cout<<"Enter Password: "<<endl;
    cin>>passwordAsInput;

    cout<<"UserName: "<<username<<endl;
    cout<<"Password: "<<password<<endl;

    cout<<"userNameAsInput: "<<userNameAsInput<<endl;
    cout<<"passwordAsInput: "<<passwordAsInput<<endl;

    int result = strcmp(username, userNameAsInput); // if strings are equal it will return 0 else some other integer number
    cout<<"Result is: "<<result<<endl;

    if(strcmp(username, userNameAsInput) == 0){
        cout<<"User Name Matched"<<endl;
        if(strcmp(password, passwordAsInput) == 0){
        cout<<"Password Matched"<<endl;
        }else{
            cout<<"Password MisMatched"<<endl;
        }
    }else{
        cout<<"User Name MisMatched"<<endl;
    }

    return 0;
}
