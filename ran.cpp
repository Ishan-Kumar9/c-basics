#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    bool eligible = (age>=18);

    if(eligible){
        cout<<"Eligible";
    }

    cout<<(!eligible ? "Not Eligible" : "");

    return 0;
}