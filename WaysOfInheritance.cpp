#include<iostream>
using namespace std;

class CA{

    int a;

    protected:
    int b;

    public:
    int c;

    CA(): a(10), b(20), c(30){
        cout<<"CA Object Created"<<endl;
    }

    void show(){
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    }

};

//class CB : public CA{ // Inheritance in Public Mode
//class CB : protected CA{ // Inheritance in Protected Mode: public will become protected
class CB : private CA{ // Inheritance in Private Mode: protected and public will become private
    public:

    CB(){
        cout<<"CB Object Constructed"<<endl;
    }

    void showDetails(){
        //cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        cout<<"b: "<<b<<" c: "<<c<<endl;
    }

};

int main(){

    //CA ca;
    //ca.show();

    CB cb;
    cb.showDetails();

    //cout<<cb.b<<endl; error: protected
    //cout<<cb.c<<endl; error: as we inherit in protected mode: public becomes protected

    return 0;
}

/*
     Ways of Inheritance
     CA             private     protected      public
     CB:public      NA          protected      public
     CB:protected   NA          protected      protected
     CB:private     NA          private        private

       Access Modifiers:
       private -> Accessible only inside the class and not outside
       protected -> Accessible only inside the class or the Child Class and not outside
       public -> Accessible everywhere

*/

