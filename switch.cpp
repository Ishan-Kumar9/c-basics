#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input a character: \n";
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"Namaste\n";
        break;
        case 'b':
        cout<<"Hello\n";
        break;
        case 'c':
        cout<<"Hola\n";
        break;
        case 'd':
        cout<<"Ciao\n";
        break;
        case 'e':
        cout<<"salut\n";
        break;
        default:
        cout<<"I am still learning more\n";
        break;
    }
    
    return 0;
}