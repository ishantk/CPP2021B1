#include<iostream>
using namespace std;

// add 2 numbers
void add(int a, int b){
    int result = a + b;
    cout<<"Addition Result is: "<<result<<endl;
}

// subtract 2 numbers
void subtract(int a, int b){
    int result = a - b;
    cout<<"Subtraction Result is: "<<result<<endl;
}

/*int main(){
    cout<<"This is main"<<endl;
    return 0;
}*/

int main(int argc, char** argv){ // char** argv -> Array of Strings which is input to the main
    cout<<"argc is: "<<argc<<endl;
    
    for(int i=0;i<argc;i++){
        cout<<argv[i]<<endl;
    }

    if(argc == 4){
        
        int choice = atoi(argv[1]);
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);

        if(choice == 1){
            cout<<"We will execute add operation\n";
            add(num1, num2);
        }else if(choice == 2){
            cout<<"We will execute subtract operation\n";
            subtract(num1, num2);
        }else{
            cout<<"Inavlid Choice "<<choice<<endl;
        }

    }else{
        cout<<"Sorry, Please enter the correct input for the program to work\n";
    }
}

// Create a Program which will read email and password as input from the user
// Than check if the email is john@example.com and password is john123
// In case email and password matched show a welcome message or other eay show error message

// ./a.out john@example.com john123   | Ouput: Success
// ./a.out fionna@example.com john123 | Ouput: Failure

// strcmp -> built in function to compare 2 strings :)