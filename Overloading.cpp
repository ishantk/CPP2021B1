#include<iostream>
using namespace std;

/*
    OOPS:
        1. ENCAPSULATION -> Data Hiding (private, setters and getters)
        2. POLYMORPHISM
        3. INHERITANCE
        4. ABSTRACTION

    Polymorphism: Many Forms
        1. Compile Time Polymorphism
            1.1 Function Overloading
            1.2 Constructor Overloading
            1.3 Operator Overloading
                Unary
                    ++, --
                Binary
                    +, -, *, /, <

        2. Run Time Polymorphism
            Deals with Inheritance
*/

class Authentication{

    public:
        Authentication(){

        }

        // Destructors are not overloaded as they are executed when object is deleted from memory 
        // and we have no control to pass input to it
        ~Authentication(){

        }

        Authentication(int a){
            
        }

        Authentication(int a, int b){
            
        }

        void login(string email, string password){
            cout<<"Login with Email and Password\n";
        }

        /*void login(string username, string passphrase){
            cout<<"Login with Email and Password\n";
        }*/

        void login(string googleId){
            cout<<"Login with Google\n";
        }

        // Function Overloading: same function name with different inputs
        // Compile Time Binding: is when compiler binds the function execution call to its definition
        // Rules to Overload:
        //  1 Function Name is Same
        //  2 Inputs should be DIFFERENT/UNIQUE
        //      2.1 Number of Arguments
        //      2.2 Type of Arguments
        //      2.3 Sequence of Arguments
        //  3 Return Type has no role to play

        void area(int side){

        }

        void area(int length, int breadth){

        }

        void area(float radius){

        }

        void fun(int a, float b){

        }

        void fun(float a, int b){

        }
};

class Dish{

    string name;
    int price;
    int quantity;

    public:

    Dish(): name("NA"), price(0), quantity(0){

    }

    Dish(string name, int price, int quantity): name(name), price(price), quantity(quantity){

    }

    void increment(){
        quantity++;
    }

    void decrement(){
        quantity--;
    }

    void showDish(){
        cout<<"Dish is: "<<name<<" "<<price<<" "<<quantity<<endl;
    }

    void operator++(){ // For prefix notation -> takes no input
       ++quantity;
    }

    void operator--(){
        --quantity;
    }

    void operator++(int i){ // For Postfix notation  -> which will take int as input
        quantity++;
    }

    void operator--(int i){
        quantity--;
    }

};

int main(){

    Authentication auth;
    auth.login("john@example.com", "pass123");
    auth.login("john@gmail.com");

    Dish dish1("Dal Makhani", 200, 1);
    
    //dish1.increment();
    //dish1.increment();
    //dish1.increment();
    //dish1.decrement();

    ++dish1;
    dish1++;
    --dish1;
    ++dish1;

    dish1.showDish();

}