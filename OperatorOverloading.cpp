#include<iostream>
using namespace std;

class Point{

    int x;
    int y;

    public:

    Point(): x(0), y(0){

    }

    Point(int x, int y): x(x), y(y){

    }

    void showPoint(){
        cout<<"Point is: "<<x<<" "<<y<<endl;
    }

    //Point addPoints(Point &p){
    Point operator+(Point &p){ // operator+  is a function
        Point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }

    bool operator>(Point &p){ // operator+  is a function
        if(x+y > p.x+p.y){
            return true;
        }else{
            return false;
        }
    }
};

class Date{

};

int main(){
    
    Point p1(10, 20); // x-> 10 and y->20 
    Point p2(30, 40); // x-> 30 and y->40
    Point p3;         // x-> 0 and y->0

    //p3 = p1.addPoints(p2);
    //p3.showPoint();

    // Here we have overloaded operator + which means to redefine how + operator should work on objects
    p3 = p1 + p2; // -> p1.operator+(p2);
    p3.showPoint();

    bool result = p1 > p2;
    cout<<"Is p1 > p2: "<<result<<endl;

    // Date d1(22, 1, 2019);
    // Date d2(23, 1, 2019);

    // Is the date larger or smaller than the other date
    // If both the date objects are same return accordingly
    //int result = d1 > d2; 

}