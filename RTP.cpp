#include<iostream>
using namespace std;

class PayTMPaymentGateway{
    
    public:

    virtual void pay(int amount){
        cout<<"[PayTM]: Payment Transaction Initiated..."<<endl;
        cout<<"[PayTM]: Payment received: "<<amount<<endl;
    }

};

class ZomatoPaymentsPage: public PayTMPaymentGateway{

    // Function Overriding
    void pay(int amount){
        amount += 50;
        PayTMPaymentGateway::pay(amount);
    }

    public:
    void placeOrder(int amount){
        cout<<"[ZOMATO]: Placing the Order.."<<endl;
        pay(amount);
        cout<<"[ZOMATO]: Order Placed !!"<<endl;
    }

};

class SwiggyPaymentsPage: public PayTMPaymentGateway{

    public:

    // Function Overriding
    void pay(int amount){
        amount += 30;
        PayTMPaymentGateway::pay(amount);
    }

    void placeOrder(int amount){
        cout<<"[SWIGGY]: Placing the Order.."<<endl;
        pay(amount);
        cout<<"[SWIGGY]: Order Placed !!"<<endl;
    }

};

int main(){

    //PayTMPaymentGateway gateway;
    //gateway.pay(3000);

    //ZomatoPaymentsPage page;
    //page.placeOrder(3000);

    // RTP (Run Time Polymorphism)
    PayTMPaymentGateway *payTm;
    payTm = new ZomatoPaymentsPage();
    //payTm = new SwiggyPaymentsPage();

    payTm->pay(3000);

    return 0;
}