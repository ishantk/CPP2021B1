#include<iostream>
using namespace std;

// An inline is a function, whose definition is replaced by its execution call
// Just to fasten the execution i.e. a perfromance optimization

inline float getDiscount(float amount){
    float discount = 0.20 * amount;
    return discount;
}

int main(){

    //float discount = 0.20 * 3000;
    //float result = discount;

    float result = getDiscount(3000);
    cout<<"Discount is: "<<result<<endl;

    return 0;
}