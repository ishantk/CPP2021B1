// Arrays: is a Multi Value Container
//               it is homogeneous i.e. data has to be of same type
//               it is fixed in size
//               data is indexed (0 to n-1) and is stored in continous memory locations
#include<iostream>
using namespace std;

int main(){

    int physics=0;
    int maths=0;
    int chemistry=0;

    // Array of Integers
    int subjects[3];

    cout<<"Enter Marks for Physics: "<<endl;
    //cin>>physics;
    cin>>subjects[0];

    cout<<"Enter Marks for Maths: "<<endl;
    //cin>>maths;
    cin>>subjects[1];

    cout<<"Enter Marks for Chemistry: "<<endl;
    //cin>>chemistry;
    cin>>subjects[2];

    //int average = (physics+maths+chemistry)/3;
    int average = (subjects[0]+subjects[1]+subjects[2])/3;
    cout<<"Average is: "<<average<<endl;

    return 0;
}