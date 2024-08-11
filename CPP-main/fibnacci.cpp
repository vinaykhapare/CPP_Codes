#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<2)
    { 
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);

}

int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    cout<<"Fibonacci series up to "<<n<<"th term is: "<<fibonacci(n)<<endl;
    

    return 0;
}