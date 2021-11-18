#include<iostream>
using namespace std;

/*

    Introduction to OOPS
----------------------
    Object Oriented Programming Structure
       
        Computer Science:
        Object
            Storage Container: Which will store data :)
                Multi Value Container: which can store lot of data
                can be homogeneous or hetrogeneous both                
        Class
            is textual representation of Object :) i.e. in the form of code :)

       Real World     
        Object: is anything in reality
        Class: Is Drawing of that object


    Principle of OOPS:
        1. Think of Object
            From the requirements think of object(which will have lot of data associated to it)
        2. Create its Representation
        3. From the Representation create the real Object

    Software Development Requirements
        Customer Management System
        Patient Management System
        
        Food Delivery System     | Requirements   
            We need to list restaurants
            For every restaurant we need to show their dishes
            User should signup and should be able to place an order
            Promo Codes will be applied by users for the discounts on orders


 Pillars of OOPS:
    > Encapsulation
    > Abstraction
    > Inheritance
    > Polymorphism
         
Restaurant: Object
attributes:   name, phone, email, address, operatingHours, ratings, pricePerPerson, category         

*/

// 1. Think of an Object
//Restaurant: Object
//attributes:   name, phone, email, address, operatingHours, ratings, pricePerPerson, category         

// 2. Structure/Representation of Object
class Restaurant{
    
    public:

    string name;
    string phone;
    string email;
    string address;
    string operatingHours;
    float ratings;
    int pricePerPerson;
    string category;

};


int main(){

    // 3. From the Representation create the real Object

    // restaurant1 is an object which can contain lot of data as specified above
    Restaurant restaurant1;
    Restaurant restaurant2;
    
    // Write Data in Object
    restaurant1.name = "College Road Samosa";
    restaurant1.phone = "+91 99999 11111";
    restaurant1.email = "smosa@college.info";
    restaurant1.address = "College Road, Ludhiana";
    restaurant1.pricePerPerson = 50;
    restaurant1.ratings = 4.5;
    restaurant1.operatingHours = "16:00 to 20:00";
    restaurant1.category = "Street Food";

    restaurant2.name = "Table by Basant";

    //cout<<"restaurant1 is: "<<restaurant1<<endl;
      // Read Data from Object
    cout<<"restaurant1 is: "<<restaurant1.name<<endl;
    cout<<"restaurant2 is: "<<restaurant2.name<<endl;

    cout<<"Address of restaurant1 is: "<<&restaurant1<<endl;
    cout<<"Address of restaurant2 is: "<<&restaurant2<<endl;
    return 0;
}