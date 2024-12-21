#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum = sum + pow(lastdigit, 3);
        n=n/10;
    }
    if(sum == originaln)
    {
        cout<<"Armstrong\n";
    }
    else
    {
        cout<<"Not Armstrong\n";
    }
    return 0;
}