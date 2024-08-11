#include<bits/stdc++.h>
using namespace std;

// call by reference using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x, y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Before Swapping: "<<x<<" and "<<y<<endl;
    swap(&x,&y);
    cout<<"After Swapping: "<<x<<" and "<<y<<endl;
    return 0;
}