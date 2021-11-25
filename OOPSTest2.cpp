#include<iostream>
using namespace std;

class Dish{
    
    // Attributes/Data Memebers of Object are private
    string name;
    int price;
    int quantity;
    static int number;

    public:
    Dish(){
        name = "";
        price = 0;
        quantity = 0;
        number = 0;
    }

    Dish(string name, int price){
        this->name = name;
        this->price = price;
        quantity = 1;
        number = 1;
    }

    void increment(){
        quantity++;
        number++;
    }

    void decrement(){
        quantity--;
        number--;
    }

    void showDish(){
        cout<<name<<"  "<<price<<"  "<<quantity<<endl;
        cout<<number<<endl;
    }

    int getQuantity(){
        return quantity;
    }
};

int Dish::number;

int main(){

    Dish dish1("Dal Makhani", 200);
    Dish dish2("Paneer Makhani", 300);
    // Reference Variable | Alias Name of dish1 is dish3
    Dish &dish3 = dish1;

   // dish1.showDish(); Dal 200 1
   // dish2.showDish(); Paneer 300 1

    dish1.increment(); // 2
    dish2.increment(); // 2
    dish3.increment(); // 3

    dish3.increment(); // 4
    dish2.increment(); // 3

    dish1.decrement(); // 3
    dish2.decrement(); // 2

    cout<<"TEST OUTPUT"<<endl;
    dish1.showDish(); //  Dal : 200 :     3  | number: 
    dish2.showDish(); // Paneer: 300: 2 | number: 
    dish3.showDish(); // Dal : 200 :      3 | number: 

    cout<<"Total "<<(dish1.getQuantity() + dish2.getQuantity())<<endl;

    return 0;
}
