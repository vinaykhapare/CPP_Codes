#include<bits/stdc++.h>
using namespace std;

 class Base{
    public:
         virtual int sum(int a, int b){
            cout<<"Base class called"<<endl;
            return a+b;
        }
};

class Derived: public Base{
    public:
        int sum(int a,int b){
            cout<<"Derived class called"<<endl;
            return a+b;
        }
};

#if 0

// function overloading
if(return type && parameters are different) {
    // Function overloading
}
else if(return type same && parameters are different) {
    // Function overloading
}

// fuction overriding
if(function name same && same parameter){
    // fuction overriding   
}

#endif

int main(){
    Base *b;
    Derived d;
    b=&d;
    cout<<b->sum(10,20);
    return 0;
}