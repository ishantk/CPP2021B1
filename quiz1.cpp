#include<iostream>
using namespace std;

int main(){

    int i = 10;
    int j = i;
    int &k = i;
    int &l = i;

    int *ptr = &i;
    int **pptr = &ptr;

    **pptr = 12;
    *ptr = **pptr + 12;

    cout<<"i is: "<<i<<endl;
    cout<<"j is: "<<j<<endl;
    cout<<"k is: "<<k<<endl;
    cout<<"l is: "<<l<<endl;
    cout<<"*ptr is: "<<*ptr<<endl;
    cout<<"**pptr is: "<<**pptr<<endl;

    return 0;
}