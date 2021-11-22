#include<iostream>
using namespace std;

// 1. Think about Object
//     MobileRecharge: typeOfRecharge, phoneNumber, operator, amount

// 2. Create Class
// Class is representation of Object as Text
class MobileRecharge{

    public:
    int typeOfRecharge;  // 1 -> prepaid 2-> postpaid
    string phoneNumber;
    string carrier;
    int amount;

    // Special function -> Name is same as that of class name
    // No Return type
    // CONSTRUCTOR
    // to give default values to the attributes of object
    MobileRecharge(){
        typeOfRecharge = 1;
        phoneNumber = "NA";
        carrier = "Airtel";
        amount = 300;
    }
   
   // Paramterized Constructor
    MobileRecharge(int t, string p, string c, int a){
        typeOfRecharge = t;
        phoneNumber = p;
        carrier = c;
        amount = a;
    }

    // Destructor
    ~MobileRecharge(){
        cout<<"Object Destroyed for "<<phoneNumber<<endl;
    }

    void setRechargeDetails(int t, string p, string c, int a){
        typeOfRecharge = t;
        phoneNumber = p;
        carrier = c;
        amount = a;
    }

    void askRechargeDetails(){
        cout<<"Choose 1 for Prepaid and 2 for Postpaid"<<endl;
        cin>>typeOfRecharge;

        cout<<"Enter Phone Number: "<<endl;
        cin>>phoneNumber;

        cout<<"Enter Carrier: "<<endl;
        cin>>carrier;
        
        cout<<"Enter Amount:"<<endl;
        cin>>amount;
    }

    void showRechargeDetails(){
        cout<<"~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Type of Recharge: "<<typeOfRecharge<<endl;
        cout<<"Phone Number: "<<phoneNumber<<endl;
        cout<<"Carrier: "<<carrier<<endl;
        cout<<"Amount: "<<amount<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    }

};


int main(){

    // 3. Create real object in memory
    MobileRecharge recharge1; // here recharge1 is the name of MobileRecharge storage container
    MobileRecharge recharge2;
    MobileRecharge recharge3(2, "+91 98765 09090", "idea", 720);
    int age; // here age is the name of integer storage container

    // MobileRecharge is class name
    // recharge1 is the name of object

    // Access data inside object
    // Write Operation
    recharge1.typeOfRecharge = 1;
    recharge1.phoneNumber = "+91 99999 11111";
    recharge1.carrier = "Airtel";
    recharge1.amount = 550;

    // Update Operation
    recharge1.amount = 1280;

    cout<<"Address of recharge1 is: "<<&recharge1<<endl;
    cout<<"Address of recharge2 is: "<<&recharge2<<endl;
    cout<<"Address of recharge3 is: "<<&recharge3<<endl;

    recharge2.setRechargeDetails(2, "+91 99900 00991", "Jio", 317);
    //recharge2.askRechargeDetails();

    // Read Operation
    //cout<<recharge1.phoneNumber<<" will be recharged for amount of "<<recharge1.amount<<endl;
    //cout<<recharge2.phoneNumber<<" will be recharged for amount of "<<recharge2.amount<<endl;
    //cout<<recharge3.phoneNumber<<" will be recharged for amount of "<<recharge3.amount<<endl;

    recharge1.showRechargeDetails();
    recharge2.showRechargeDetails();
    recharge3.showRechargeDetails();

    return 0;
} // whenever main will be finished, object will be deleted :)

// Assignment: Code MakeMyTrip One way Flight Booking