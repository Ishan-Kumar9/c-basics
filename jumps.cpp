#include<iostream>
using namespace std;
int main()
{
    // for(int i=1; i<=100; i++)
    // {if(i%3==0){
    //     continue;
    // }
    // cout<<i;
    // }


    // int n,i;
    // cout<<"Enter any Number: ";
    // cin>>n;
    // for(i=2; i<n; i++)
    // {
    //     if(n%i==0){
    //         cout<<"It is non-prime.\n";
    //         break;
    //     }
    // }
    // if(i==n){
    //     cout<<"It is Prime.\n";
    // }

    int a,b,i,j;
    cout<<"Enter starting number: ";
    cin>>a;
    cout<<"Enter ending number: ";
    cin>>b;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
        {
            break;
        }
    }
    if(j==i){
        cout<<i<<endl;
    }
    }

    return 0;
}