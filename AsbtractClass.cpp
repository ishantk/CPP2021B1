#include<iostream>
using namespace std;

class GooglePay{

    public:
        void pay(int amount){
            
            bool isBankServerRunning = false;

            if(isBankServerRunning){
                cout<<"[GPay] Payment Processed for amount "<<amount<<endl;
                onSuccess();
            }else{
                cout<<"[GPay] Payment Failed for amount "<<amount<<endl;
                onFailure();
            }
        }

    public:
        virtual void onSuccess() = 0;
        virtual void onFailure() = 0;
};

class ZomatoPaymentPage: public GooglePay{

    void onSuccess(){
        cout<<"[Zomato] Order Placed. Thank you for your payment"<<endl;
    }

    void onFailure(){
        cout<<"[Zomato] Order Failed. Payment Transaction Failed"<<endl;
    }
};

int main(){

    ZomatoPaymentPage payment;
    payment.pay(2000);

    return 0;
}