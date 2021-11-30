#include<iostream>
using namespace std;

class Point{

    int x;
    int y;
    
    public:
    
    Point();
    Point(int x, int y);
    void showPoint();
    //Point addPoints(Point p1, Point p2); // This is a function with 2 point objects as input
    Point addPoints(Point &p1, Point &p2); // This is a function with 2 point objects as input

};

    Point::Point(): x(0), y(0){

    }

    Point::Point(int x, int y): x(x), y(y){

    }

    void Point::showPoint(){
        cout<<"Point is: "<<x<<" | "<<y<<endl;
    }

    //Point Point::addPoints(Point p1, Point p2){
    Point Point::addPoints(Point &p1, Point &p2){

        Point temp; // A temporary point object

        temp.x = p1.x + p2.x;
        temp.y = p1.y + p2.y;

        return temp;
    }

    int main(){ 

        Point myPoint(10, 20);
        Point yourPoint(30, 40);

        Point someObject; // x: 0, y: 0

        someObject = someObject.addPoints(myPoint, yourPoint);
        someObject.showPoint(); // 40, 60

        return 0;
    }

    // Create an Object called Date with attributes: dd mm and yyyy
    // Consider we have date1 object as 12,4,1986
    // And consider an imput from the user as number of days eg: 30 days
    // Add 56 days in the date1 object to give an accurate date :) => 12, 5, 1986