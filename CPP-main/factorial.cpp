#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return n;
    }
    return n * factorial(n-1);
}
int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;  

    return 0;
}