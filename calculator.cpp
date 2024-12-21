#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 numbers: \n";
    cin>>a>>b;
    
    char op;
    cout<<"Input an operator: ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '%':
        cout<<a%b<<endl;
        break;
        default:
        cout<<"Try another operator\n";
        break;

    }
    return 0;
}