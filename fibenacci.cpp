#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
{
    factorial  = factorial*i;
}
return factorial;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<"Factorial of "<<n<<" is: "<<fact(n);
    return 0;
}