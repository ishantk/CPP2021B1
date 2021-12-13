#include<iostream>
using namespace std;

// What is Inheritance ?
// Parent Child Relationship
// RULE1: Before the object of Child, Parent Object is created in memory
// RULE2: Anything in parent is accessible by child if it is public
//        In Case, child has the same property, child will use its own rather than parent
// private: accessible only inside the class
// protected: accessible within class and child class
// public: accessible everywhere
class Parent{

    string fname;
    int wealth;

    protected:
    string lname;

    public:
    Parent(){
        fname = "John";
        lname = "Watson";
        wealth = 100000;
        cout<<"Parent Object Constructed"<<endl;
    }

    void showDetails(){
        cout<<"Parent Details: "<<fname<<" "<<lname<<" "<<wealth<<endl;
    }

    void updateWealth(){
        wealth -= 5000;
    }
};

class Child: public Parent{ // Inheritance 

    string fname;
    string companyName;
    int wealth;

    public:
    Child(){
        fname = "Fionna";
        companyName = "ABC Ltd";
        wealth = 50000;
        cout<<"Child Object Constructed"<<endl;
    }

    void update(){
        wealth -= 10000;
    }

    // Overriding
    // When we re-define the function of parent in child and change its definition
    void showDetails(){
        cout<<"Child Details: "<<fname<<" "<<lname<<" "<<companyName<<" "<<wealth<<endl;
    }
};

int main(){

    //Parent parent;              // Compile Time Object Construction -> Stack Memory
    //Parent *ptr = new Parent(); // Run Time Object Construction -> Heap Memory
    //parent.showDetails();

    Child child;
    //child.fname = "Fionna"; // fname property of parent is private and hence child cannot access it
    
    child.updateWealth();
    child.update();
    child.showDetails();

    return 0;
}