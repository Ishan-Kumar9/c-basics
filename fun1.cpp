#include<iostream>
using namespace std;

void ishan(int num)
{
    cout<<num<<endl;
    return;
}
int add(int num1,int num2)
{
    ishan(num1);
    ishan(num2);
    int sum=num1 + num2;
    return sum;
}
int main()
{
   int a=2;
   int b=3;
   cout<<add(a,b)<<endl;
     return 0;
}