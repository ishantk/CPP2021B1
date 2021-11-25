#include<iostream>
using namespace std;

class Dish{

    // Atributes: Property of Object
    string name;
    int price;
    int quantity;

     // Attrinute: Property of Class
    // Common variable which can be used by all the objects
    static int count;

    public:

    

    Dish(){
        name = "NA";
        price = 0;
        quantity = 0;
    }

    Dish(string name, int price, int quantity){
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    void showDish(){
        cout<<name<<" Details\n";
        cout<<price<<" | "<<quantity<<endl;
    }

    static void setCount(int c){
        count = c;
        //name = "Noodles"; error: -> cannot use non static in static function

    }

    static int getCount(){
        return count;
    }

};

// Any variable which we mark static in class
// Should be declared outside the class with scope resolution operator ::
int Dish::count;

int main(){

    Dish dish1; // name -> NA, price -> 0, quantity -> 0
    Dish dish2("Dal Makhani", 200, 2); 
    Dish dish3("Paneer Makhani", 300, 1);

    dish1.showDish();
    dish2.showDish();
    dish3.showDish();

   // dish3.count = 11; // static variable can be accessed by any object
   //Dish::count = 50; // static variable can be accessed by class name with :: operator
    
    // cout<<dish1.count<<endl;
    // cout<<dish2.count<<endl;
    // cout<<dish3.count<<endl;

    dish1.setCount(30);
    Dish::setCount(20);
    cout<<dish1.getCount()<<"  "<<dish2.getCount()<<"  "<<dish3.getCount()<<endl;
    cout<<Dish::getCount()<<endl;
    return 0;
}
