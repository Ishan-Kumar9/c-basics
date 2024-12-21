#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++)
{
    cin>>array[i];
}
for(int j=1;j<n;j++)
{
    for(int i=0;i<n-j;i++)
    {
        if(array[i]>array[i+1]){
        int tep=array[i];
        array[i]=array[i+1];
        array[i+1]=tep;
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
return 0;
}