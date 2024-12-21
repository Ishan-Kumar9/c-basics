#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before Swapping: \n";
    cout<<"First Number = "<<a<<endl;
    cout<<"Second Nummber = "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After Swapping: \n";
    cout<<"First Number = "<<a<<endl;
    cout<<"Second Number = "<<b<<endl;
    return 0;
}