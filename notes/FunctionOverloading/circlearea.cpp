#include<bits/stdc++.h>
using namespace std;

class Circle{
    private:
    double radius;
    public:

    Circle(double radius){
        this-> radius = radius;
    }

    double getArea(){
        return M_PI*radius*radius;
    }
};

int main(){
    Circle c(10);
    double area=c.getArea();
    cout<<"The area of the circle is :"<<area<<endl;
    return 0;
}