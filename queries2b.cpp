// Object Copy
#include<iostream>
using namespace std;

// Object Copy Operation

class Student{
    
    int roll;
    string name;
    string email;

    public:

    Student():roll(0), name("NA"), email("NA"){

    }

    Student(int roll, string name, string email):roll(roll), name(name), email(email){

    }

    void showStudent(){
        cout<<roll<<" | "<<name<<" | "<<email<<endl;
        cout<<"Address is: "<<this<<endl;
    }

    // Function with input as an Object
    // Here we use the concept of Object copy either direct copy or reference copy
    static void upgradeStudent(Student student){
        cout<<"\nUPGRADING....\n";
        student.showStudent();
    }
};

int main(){

    Student s1; // Object Construction Statement
    Student s2(1, "John", "john@example.com");
    
    // Object Copy Operation
    //Student s3 = s2; // Values of the Attributes of object S2 will be copied into S3
    
    // Reference Variable Creation
    Student &s3 = s2;  // Alias Creation

    s1.showStudent();
    s2.showStudent();
    s3.showStudent();


    Student::upgradeStudent(s2);

    return 0;
}