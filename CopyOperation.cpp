#include<iostream>
using namespace std;

class ComplexNumber{
    int real;
    int imaginery;

    public:
    ComplexNumber(): real(0), imaginery(0){ // Initialization List

    }

      ComplexNumber(int real, int i): real(real), imaginery(i){ // Initialization List

    }

    /*void showComplexNumber(){
        cout<<"Real: "<<real<<" Imaginery: "<<imaginery<<endl;
    }*/

    // Declartion
    void showComplexNumber();

    ~ComplexNumber();

    void increment();
};

// Defining a function of a class outside the definition of class
void ComplexNumber::showComplexNumber(){
        cout<<"Real: "<<real<<" Imaginery: "<<imaginery<<endl;
 }

 ComplexNumber::~ComplexNumber(){
     cout<<"Complex Number Deleted from memory"<<endl;
 }

 void  ComplexNumber::increment(){
     real++;
     imaginery++;
 }

int main(){

    ComplexNumber number1;
    ComplexNumber number2(10, 20);

    number1.showComplexNumber();
    number2.showComplexNumber();


    // Copy Operation
    // data inside object number2 will be copied to the number3
    ComplexNumber number3 = number2;

    // Not a Copy Operation
    // This is Reference Variable for Object number2 i.e. alias name of number2 is number4
    ComplexNumber& number4 = number2;

    number3.increment();
    number3.showComplexNumber(); // 11 and 22
    number2.showComplexNumber(); // 10 and 20

    return 0;
}