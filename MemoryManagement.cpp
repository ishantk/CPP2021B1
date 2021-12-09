#include<iostream>

using namespace std;

// keywords: new and delete

int main(){

    // a is an automatic variable. it will be destroyed when main will be destroyed
    // Stack Variable
    int a = 10;  // Compile Time Variable -> i.e. Compiler knows at the time of compilation how much memory is required
    
    // Dynamic Variable or Dyanmic Storage Container
    // b is a pointer which will point to a container with data 10 in the heap
    int *b = new int(10); // Run Time Variable -> Compiler will not intefere for memory allocation. Memory allocation happens when we will run the program
    cout<<"b is: "<<b<<endl;
    cout<<"*b is: "<<*b<<endl;
    
    delete b; // Hence, we can anytime remove the container from the memory
    // after deletion data will be removed from memory
   

    // we can create all the variables at run time
    //float* ptr = new float(2.2);

    int* array = new int[10];

    array[0] = 10;
    array[3] = 20;
    array[9] = 30;

    for(int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }


    delete[] array;
}