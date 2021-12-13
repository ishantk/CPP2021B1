#include<iostream>
using namespace std;

class OneWay{

    protected:
    string from;
    string to;
    string departureDate;
    int travellers;
    string travelClass;

    public:

    OneWay(){

    }

    OneWay(string from, string to, string departureDate,int travellers, string travelClass){
        this->from = from;
        this->to = to;
        this->departureDate = departureDate;
        this->travellers = travellers;
        this->travelClass = travelClass;
    }

    void show(){
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"From "<<from<<" To "<<to<<endl;
        cout<<"Departure "<<departureDate<<endl;
        cout<<"Travellers "<<travellers<<endl;
        cout<<"Travel Class "<<travelClass<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
};

class RoundTrip: public OneWay{
    string returnDate;

    public:

    RoundTrip(){
        
    }

    RoundTrip(string from, string to, string departureDate, string returnDate, int travellers, string travelClass): OneWay(from, to, departureDate, travellers, travelClass){
        //OneWay(from, to, departureDate, travellers, travelClass);
        this->returnDate = returnDate;
    }

    void show(){
        OneWay::show();
        cout<<"return date: "<<returnDate<<endl;
    }
};


int main(){

    //OneWay oneWay("Delhi", "Bangalore", "20th Dec, 2021", 2, "Economy");
    //oneWay.show();

    RoundTrip roundTrip("Delhi", "Bangalore", "20th Dec, 2021", "25th Dec, 2021", 2, "Economy");
    roundTrip.show();

    return 0;
}

// Assignment: From Paytm, explore and implement a use case which will use Inheritance