// Friend Function : is a function which can access private data
// Friend Class: is a class whose all functions can access private data
#include<iostream>
using namespace std;

class CA{

    int a; // private: not accessible outside the class 

    public:

    CA(){
        a = 10;
    }

    // declare, fun to be a friend function of CA
    friend void fun();
    friend class CC; // we can declare class as a friend of another class: all functions in class CC can access provate data of CA
};

class CB{
    
    int b;  // private: not accessible outside the class 

    public:

    CB(){
        b = 40;
    }

    friend void fun();
};

class CC{

    public:

    void hello(){
        CA caObj;
        cout<<"a in hello of CC is: "<<caObj.a<<endl;
    }

};


// Regular Function -> Declared as a friend in 2 classes  now
void fun(){
    CA caObj;
    CB cbObj;
    cout<<"a is: "<<caObj.a<<endl;
    cout<<"b is: "<<cbObj.b<<endl;
}

class Point{

    int x;
    int y;

    public:
    
    Point(): x(0), y(0){

    }

    Point(int x, int y): x(x), y(y){

    }

    void show(){
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }

    Point operator+(Point &point){
        Point temp;
        temp.x = x + point.x;
        temp.y = y + point.y;
        return temp;
    }

    friend Point operator+(int number, Point&point);
    friend Point operator+(Point&point, int number);
};

Point operator+(int number, Point&point){
        Point temp;
        temp.x = number + point.x;
        temp.y = number + point.y;
        return temp;
}

Point operator+(Point&point, int number){
        Point temp;
        temp.x = number + point.x;
        temp.y = number + point.y;
        return temp;
}

int main(){

    fun();

    CC ccObj;
    ccObj.hello();

    Point p1(10, 20);
    Point p2(30, 40);

    Point p3; // 0, 0

    //p3 = p1 + p2; // -> p3 = p1.operator+(p2)
    
    //p3 = 10 + p2; 
    p3 = p2 + 20;
    p3.show();

    return 0;
}