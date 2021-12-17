#include<iostream>
using namespace std;

class Cab{

    public:
        /*virtual void bookCab(string source, string destinition){
            cout<<"Cab Booked from "<<source<<" to "<<destinition<<endl;
        }*/

        // Pure Virtual Function
        // A function with no definition
        virtual void bookCab(string source, string destinition) = 0;
};

class OlaMicro: public Cab{

    public:
        // Function Overriding 
        void bookCab(string source, string destinition){
            cout<<"Micro Cab Booked from "<<source<<" to "<<destinition<<endl;
        }
};

class OlaMini: public Cab{

    public:
        // Function Overriding 
        void bookCab(string source, string destinition){
            cout<<"Mini Cab Booked from "<<source<<" to "<<destinition<<endl;
        }
};

class OlaSedan: public Cab{

    public:
        // Function Overriding 
        void bookCab(string source, string destinition){
            cout<<"Sedan Cab Booked from "<<source<<" to "<<destinition<<endl;
        }
};

int main(){

    // Compile Time Object Construction
    //Cab cab;
    //cab.bookCab("Work", "Home");

    // Run Time Object Construction
    Cab *ptr;
    
    //ptr = new Cab(); // Object of Cab
    //ptr->bookCab("Home", "Work");

    // Polymorphic Statement: Pointer of Parent can hold the address of Child
    ptr = new OlaMicro(); // Object of Ola Micro Cab
    
    // RTP: we have 2 functions (bookCab) to choose from 
    //      1 from Parent Cab
    //      2nd from Child OlaMicro
    ptr->bookCab("Home", "Work");

    ptr = new OlaMini();
    ptr->bookCab("Home", "Work");

    return 0;
}