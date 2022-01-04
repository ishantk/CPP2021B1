#include<iostream>
using namespace std;

template<typename T>

/*int compareIntegerNumbers(int num1, int num2){
    int result = (num1 > num2) ? num1 : num2;
    return result;
}

float compareFloatNumbers(float num1, float num2){
    float result = (num1 > num2) ? num1 : num2;
    return result;
}*/

T compareNumbers(T num1, T num2){
    T result = (num1 > num2) ? num1 : num2;
    return result;
}

int main(){

    //int largerNumberIntegerResult = compareIntegerNumbers(10, 20);
    //float largerNumberFloatResult = compareFloatNumbers(5.5, 7.5);
    int largerNumberIntegerResult = compareNumbers<int>(10, 20);
    float largerNumberFloatResult = compareNumbers<float>(5.5, 7.5);
    float largerCharacterResult = compareNumbers<char>('A', 'E');
    cout<<"Larger Number Integer is: "<<largerNumberIntegerResult<<endl;
    cout<<"Larger Number Float is: "<<largerNumberFloatResult<<endl;
     cout<<"Larger Character in ASCII is: "<<largerCharacterResult<<endl;

    return 0;
}