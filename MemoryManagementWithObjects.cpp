#include<iostream>
using namespace std;

class Restaurant{

    string name;
    string phone;
    string email;
    float ratings;

    public:
    Restaurant(){
        name = "NA";
        phone = "NA";
        email = "NA";
        ratings = 0.0;
    }

    Restaurant(string name, string phone, string email,float ratings):
        name(name), phone(phone), email(email), ratings(ratings) {
        
    }

    void show(){
        cout<<"Details: "<<name<<" "<<ratings<<endl;
    }

};

int main(){

    // Static Object i.e. Inside the Stack memory
    Restaurant r1("Table By Basant", "+91 99999 11111", "table@example.com", 4.4);

    // Dynamic Object i.e. Inside the Heap memory
    Restaurant* r2 = new Restaurant("Dominoz", "+91 98765 12345", "dominoz@example.com", 4.1);
    //delete r2; // delete the object from memory

    r1.show();
    r2->show(); // use -> arrow operator to accee the functions for a dynamic object

}