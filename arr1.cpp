#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    /*int maxtilli=arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxtilli<arr[i]){
            maxtilli=arr[i];
        }
        cout<<"Max Till Index "<<i<<" is: "<<maxtilli<<endl;
    }*/

   
   for(int i=0;i<n;i++)
   {
    int sum=0;
    for(int j=i;j<n;j++)
    {
        sum=sum+arr[j];
        cout<<sum<<" ";
    }
    cout<<endl;
   }
    return 0;
} 