#include<iostream>
using namespace std;

//template<class T>
template<class T, class U>

class Point{
    
    T x;
    U y;

    public:

    Point(T x, U y):x(x), y(y){

    }

    void showPoint(){
        cout<<"Point is "<<x<<" : "<<y<<endl;
    }
};


int main(){

    // Point<int> p1(10, 20);
    // Point<double> p2(10.45, 20.55);
    // Point<char> p3('A', 'B');
    Point<int, int> p1(10, 20);
    Point<double, double> p2(10.45, 20.55);
    Point<char, char> p3('A', 'B');
    Point<int, char> p4(35, 'B');
    p1.showPoint();
    p2.showPoint();
    p3.showPoint();
    p4.showPoint();

    return 0;
}