// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: \n";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter any number: \n";
//     cin>>n;
//     while(n>0)
//     {
//         cout<<n<<endl;
//         cin>>n;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;

 do{
    cout<<n<<endl;
    cin>>n;
 }   
 while(n>0);
 return 0;
}