#include<iostream>
using namespace std;
int main()
{
    // int a=10;
    // int b;
    // b=a++;
    // cout<<a<<" "<<b<<endl;

    // int i=1;
    //    //1   //3
    // i= i++ + ++i;
    // cout<<i<<endl;

    

    int i=1,j=2,k;
      //1 //2  //1   //2   //3   //4
    k= i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k;

    return 0;
}