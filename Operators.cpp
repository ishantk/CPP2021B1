/*
    Operators :)
    they help to perform computation
    also take some logical decisions
*/

#include<iostream>
using namespace std;

int main(){

    // Arithmetic Operators
    // + - * / %

    float dishPrice = 100;
    float taxes = 0.18;

    cout<<"enter the price of dish: ";
    cin>>dishPrice;

    cout<<"Enter Taxes: \n";
    cin>>taxes;

    float total = dishPrice + (taxes*dishPrice);

    cout<<"Total is: "<<total<<endl;

    // https://www.cs.usfca.edu/~galles/visualization/OpenHash.html
    int number = 0;
    cout<<"Enter the Number: ";
    cin>>number;

    int bucketSize = 13;

    int hashCode = number % bucketSize; // % -> Remainder
    cout<<"Place number "<<number<<" in the bucket "<<hashCode<<endl;

    int d1 = number/100; // 7
    int d2 = number%100; // 21
    
    int d3 = d2/10; // 2
    int d4 = d2%10; // 1
    
    cout<<d1<<endl;
    cout<<d2<<endl;
    cout<<d3<<endl;
    cout<<d4<<endl;

    int sum = d1 + d3 + d4;
    cout<<"Sum of Digits in "<<number<<" is: "<<sum<<endl;

    return 0;
}