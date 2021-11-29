#include<iostream>
using namespace std;

// Restaurant HAS Dishes | 1 to many
// Customer HAS Address | 1 to 1
// Customer HAS Profile | 1 to 1

class Dish{

    string name;
    int price;

    public:
    Dish(){
        name = "NA";
        price = 0;
    }

    Dish(string name, int price){
        this->name = name;
        this->price = price;
    }

    void showDish(){
        cout<<name<<" | "<<price<<endl;
    }
};

class Restaurnat{
    string name;
    string email;
    string phone;
    float ratings;
    Dish* dishes; // 1 to Many

    public:
    Restaurnat(){

    }

     Restaurnat(  string name, string email, string phone,float ratings, Dish* dishes){
        this->name = name;
        this->email = email;
        this->phone = phone;
        this->ratings = ratings;
        this->dishes = dishes;
    }

    void showRestaurant(){
        cout<<"-----------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Phone: "<<phone<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Ratings: "<<ratings<<endl;
        cout<<"Dishes: "<<dishes<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"Dishes for "<<name<<endl;
        for(int idx=0;idx<6;idx++){
            dishes[idx].showDish();
            cout<<"~~~~~~~~~~~~~~"<<endl;
        }
    }

};

int main(){

    Dish dish1("Dal", 200);
    Dish dish2("Panner", 300);
    Dish dish3("Noodles", 150);
    Dish dish4("Burger", 100);
    Dish dish5("Fries", 80);
    Dish dish6("Roti", 20);

    int numbers[] = {10, 20, 30, 40, 50};

    // Array of Dishes or Array of Dish Objects
    Dish dishes[] = {dish1, dish2, dish3, dish4, dish5, dish6};
    cout<<"dishes is: "<<dishes<<endl;
    cout<<"address of dishes[0] is: "<<&dishes[0]<<endl;

    /*for(int idx=0;idx<6;idx++){
        dishes[idx].showDish();
        cout<<"~~~~~~~~~~~~~~"<<endl;
    }*/

    Restaurnat restaurnat("Table By basant", "+91 99999 111111", "table@example.com", 4.3, dishes);
    restaurnat.showRestaurant();
    return 0;
}