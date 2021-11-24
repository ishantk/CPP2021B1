/*
    1. Encapsulation: Wrapping the data and functions inside an object in a way that we hide data
       Data Hiding

       we use the keyword private to hide the data
*/

#include<iostream>
using namespace std;

class User{
    
    private:
    // Make your attributes private -> Data Hiding
    string name;
    string phone;
    string email;

    public:
    User(){
        name = "NA";
        phone = "NA";
        email = "NA";
    }

    User(string n, string phone, string email){
        name = n;
        // this->  : this pointer
        // LHS: this->phone is attribute of object and RHS phone is input from constructor
        this->phone = phone;
        this->email = email;
    }

    // Setters 
    void setName(string name){

        // Check if name is  empty or NA

        this->name = name;
    }

     void setPhone(string phone){

         int count = 0;
         int idx = 0;
         while(phone[idx] != '\0'){
             count++;
             idx++;
         }
        if(count >=10){
            this->phone = phone;
        }else{
            cout<<"Invalid Phone Number"<<endl;
        }
    }

     void setEmail(string email){
         // Check if email contains @ and . 
        this->email = email;
    }

    // Getters
    string getName(){
        return name;
    }

    string getPhone(){
        return phone;
    }

    string getEmail(){
        return email;
    }

    // Setter -> Set All data together
    void setUserDetails(string name, string phone, string email){
        // Place the Logic to check if the inputs have correct data
        this->name = name;
        this->phone = phone;
        this->email = email;
    }

    void showUserDetails(){
        cout<<"User Details: "<<name<<" "<<phone<<" "<<email<<endl;
    }

};

int main(){

    User user1;
    //user1.name = "john"; // error
    //user1.phone = "+91 99999 11111"; // error
    //user1.email = "john"; // error

    user1.setName("John");
    user1.setPhone("+91 99999 12345");
    user1.setEmail("john@example.com");

    //cout<<user1.getName()<<"  "<<user1.getPhone()<<" "<<user1.getEmail()<<endl;
    user1.showUserDetails();

    return 0;
}