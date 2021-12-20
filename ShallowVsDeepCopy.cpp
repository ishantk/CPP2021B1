#include<iostream>
using namespace std;

class Student{
    
    int* rollNumber;
    string name;
    int* marks;

    public:
    Student(){
        rollNumber = new int(101);
        name = "John";
        marks = new int(80);
    }

    void show(){
        cout<<"RollNumber: "<<*rollNumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<*marks<<endl;
    }

    void updateData(int r, string n, int m){
        *rollNumber = r;
        name = n;
        *marks = m;
    }

    /*void operator=(Student &student){
        int r = *student.rollNumber;
        int m = *student.marks;
        rollNumber = new int(r);
        marks = new int(m);
        name = student.name;
    }*/

    // Copy Constructor: DEEP COPY
    Student(Student &student){
        cout<<"Data Copied\n";
        int r = *student.rollNumber;
        int m = *student.marks;
        rollNumber = new int(r);
        marks = new int(m);
        name = student.name;
    }

};

int main(){

    Student s1;

    // Shallow Copy Operation Synatx 1
    //Student s2 = s1; // using overloaded = operator

    // Shallow Copy Operation Synatx 2
    Student s2(s1);   // using copy constructor
    
    cout<<"Object data Initially\n";
    cout<<"s1 object data\n";
    s1.show();

    cout<<"s2 object data\n";
    s2.show();


    s2.updateData(201, "Fionna", 90);

    cout<<"Object data after update by s2 is\n";
    cout<<"s1 object data\n";
    s1.show();

    cout<<"s2 object data\n";
    s2.show();

    return 0;
}

// PS: whenever we copy the data form one object to the other object
//     by default copy operaions is shallow copy which means blindly copy the data from attributes of one object into other
//     BUT
//     in case, attributes are pointers, their can be a challenge
//     i.e. if any object will update data, it will be updated for other also