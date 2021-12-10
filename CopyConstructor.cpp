// Copy Constructor

#include<iostream>
using namespace std;

class Dish{

    string name;
    int price;
    int quantity;

    public:

    Dish(): name("NA"), price(0), quantity(0){

    }

    Dish(string name, int price, int quantity): name(name), price(price), quantity(quantity){

    }

    // Copy Constructor: Automatically created inside the class by compiler
    /*Dish(Dish& dish){
        name = dish.name;
        price = dish.price;
        quantity = dish.quantity;
    }*/

    void showDish(){
        cout<<"Dish is: "<<name<<" "<<price<<" "<<quantity<<endl;
    } 

    // For every class, compiler will automatically create an overloaded = operator function
    /*Dish operator=(Dish& dish){
        name = dish.name;
        price = dish.price;
        quantity = dish.quantity;
    }*/

};


int main(){

    Dish dish1("Paneer Makhani", 300, 1);
    Dish dish2 = dish1; // Copy Operation -> with = operator (Overloaded Function in Clas)
    Dish dish3(dish1);  // Copy Operation -> with Constructor

    cout<<"Address of dish1 is: "<<&dish1<<endl;
    cout<<"Address of dish2 is: "<<&dish2<<endl;
    cout<<"Address of dish3 is: "<<&dish3<<endl;

    dish1.showDish();
    dish2.showDish();
    dish3.showDish();

    return 0;
}

// Shallow Copy VS Deep Copy 