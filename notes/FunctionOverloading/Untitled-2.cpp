#include<bits/stdc++.h>
using namespace std;
void setRadius(int a,int b)
{
    radius1=a;
    radius2=b;
}

    void setCentre(int Cx)
    {
        centre=Cx;
    }
    void setCentre(int Cy)
    {
        centre=Cy;
    }

    int getRadius()
    {
        return radius;
    }

    void setCircumference()
    {
        cicumference= M_PI*2*radius;
    }
    
    double getCicumference{
        return cicumference;
    }

    void setArea()
    {
        area=M_PI*radius*radius;
    }

    double getarea()
    {
        return area;
    }
int main(){
    
    return 0;
}