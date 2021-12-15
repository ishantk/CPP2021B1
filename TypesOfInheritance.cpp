#include<iostream>
using namespace std;

// Single Level Inheritance => 1 Parent and 1 Child
class CA{

};

class CB: public CA{

};

// Multi Level Inheritance => Parent to Child to Grandchild
class CC: public CB{

};

// Hierarchy: Multiple Children from 1 class
class CD: public CB{

};

// Multiple Inheritance
class CE: public CC, CD{

};

/*
                CA

                CB

             CC     CD   

                CE   

*/

class Student{

    public:
        int roll;
        string name;
        string address;
};

class ComputerScienceStudent: Student{

    public:
        float programmingRatings;

};

class ArtsStudent: public Student{


};

int main(){

    return 0;
}
/*
    Assignment: Develop a Use case for all different types of inheritance
*/