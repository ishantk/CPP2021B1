// File -> contains data :)
//         it has type eg: .txt, .pptx, .csv etc..
//         it can be: plain text file or binary file
// File IO Operations: File Input and File Output
//                     Input -> to read data from file into program
//                     Output -> to write data from program into file
// #include<fstream> => 3 built in classes: istream, ostream, fstream
// istream -> read data from file into program
// ostream -> write data from program into file
// fstream -> for bot read and write

#include<iostream>
#include<fstream>
using namespace std;

class Student{

    public:
    int roll;
    string name;
    int age;

    

    Student(): roll(0), name("NA"), age(0){

    }


    Student(int roll, string name, int age): roll(roll), name(name), age(age){

    }

    void input(){
        cout<<"Enter Roll Number: "<<endl;
        cin>>roll;
        //....
    }

    void saveStudentInFile(){
        //ofstream out("students.txt");
        ofstream out("students.txt", ios::app);
        out<<roll<<","<<name<<","<<age<<"\n";
        cout<<"Data Saved for "<<name<<" :)\n";
        // Release the memory resources
        out.close();
    }

    void show(){
        cout<<"Student Details: "<<roll<<", "<<name<<", "<<age<<endl;
    }

};

int main(){

    Student s1(1, "John", 18);
    Student s2(2, "Fionna", 19);

    s1.show();
    s2.show();

    s1.saveStudentInFile();
    s2.saveStudentInFile();

    /*
    // ofstream: to write the data
    ofstream out("students.txt");
    // Use operator << to write data in file
    out<<s1.roll<<","<<s1.name<<","<<s1.age<<"\n";
    out<<s2.roll<<","<<s2.name<<","<<s2.age<<"\n";

    cout<<"Data Saved :)";
    */

    return 0;
}