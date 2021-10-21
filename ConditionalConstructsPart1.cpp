// Conditional Constructs

#include<iostream>
using namespace std;

int main(){

    int zomato = 1001; // 0.40 amount >= 149
    int tryNew = 2001; // 0.50
    int bingo = 3001;  // 0.25

    int amount = 0;
    int promoCode = 0;

    cout<<"Enter Amount: "<<endl;
    cin>>amount;

    cout<<"Enter Promo Code: "<<endl;
    cin>>promoCode;

    cout<<"You Entered: "<<promoCode<<endl;

    // Regular or Simple if/else :)
    /*if(promoCode == zomato){
        cout<<"Zomato Applied Successfully"<<endl;
        cout<<"You will get 40% Off"<<endl;
    }else{
        cout<<"Invalid Promo Code"<<endl;
    }*/

    // Ladder if else
    /*if(promoCode == zomato){
        cout<<"Zomato Applied Successfully"<<endl;
        cout<<"You will get 40% Off"<<endl;
    }else if(promoCode == tryNew){
        cout<<"Try New Applied Successfully"<<endl;
        cout<<"You will get 50% Off"<<endl;
    }else if(promoCode == bingo){
        cout<<"Bingo Applied Successfully"<<endl;
        cout<<"You will get 25% Off"<<endl;
    }else{
        cout<<"Invalid Promo Code"<<endl;
    }*/

    // Nested if/else
    if(promoCode == zomato){
        cout<<"Zomato Applied Successfully"<<endl;

        if(amount >= 149){
            cout<<"You will get 40% Off"<<endl;
        }else{
            cout<<"Please add items worth "<<(149-amount)<<" more to avail discount"<<endl;
        }

        
    }else if(promoCode == tryNew){
        cout<<"Try New Applied Successfully"<<endl;
        cout<<"You will get 50% Off"<<endl;
    }else if(promoCode == bingo){
        cout<<"Bingo Applied Successfully"<<endl;
        cout<<"You will get 25% Off"<<endl;
    }else{
        cout<<"Invalid Promo Code"<<endl;
    }
    return 0;
}