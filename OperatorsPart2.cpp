// Operators - Part2
// Arithmetic Operators + - * / %
// Assignment Operators = +=, -=, *=, /= %=
// Increment & Decrement ++, --
// Relational Operators >, <, >=, <=, ==, !=
// Logical Operators && || !

#include<iostream>
using namespace std;

int main(){

    int x = 10; // create operation
    x = 20;     // update operation

    //x = x + 10; // x = 20 + 10 -> x = 30
    x += 10; // x = x + 10; // 30
    x -= 2; // x = x - 2;   // 28
    x %= 3; // x = x % 3    // 1
    cout<<"x is: "<<x<<endl; // 1

    int dishQuantity = 1;
    // Postfix notation
    dishQuantity++; // dishQuantity = dishQuantity + 1
    // Prefix notation
    ++dishQuantity; // dishQuantity = dishQuantity + 1
    dishQuantity += 1; // dishQuantity = dishQuantity + 1
    dishQuantity--;

    cout<<"dishQuantity is: "<<dishQuantity<<endl;

    //int y = dishQuantity++;
    int y = ++dishQuantity;
    cout<<"y is: "<<y<<" and dishQuantity is: "<<dishQuantity<<endl;

    // "y is: "______" and dishQuantity is: "_______endl;

    int payTmWallet = 500;
    int cabFare = 0;
    cout<<"Enter Cab Fare: "<<endl;
    cin>>cabFare;

    bool internet = false;
    bool gps = false;

    int tryNew = 10569;

    cout<<"Can i Book the Cab : "<<(payTmWallet >= cabFare)<<endl;
    cout<<"Can i Open Google Maps: "<<internet<<endl;

    int promoCode = 0;
    cout<<"Enter Promo Code: "<<endl;
    cin>>promoCode;

    cout<<"Is the Promo Code Valid: "<<(promoCode == tryNew)<<endl;
    cout<<"Is the Promo Code Not Valid: "<<(promoCode != tryNew)<<endl;

    cout<<"Enter 1 to enable internet and 0 to disable internet: "<<endl;
    cin>>internet;

    cout<<"Enter 1 to enable gps and 0 to disable gps: "<<endl;
    cin>>gps;

    cout<<"Can i Navigate with Google Maps: "<<(internet && gps)<<endl;

    return 0;
}