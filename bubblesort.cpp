#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];
    cout<<"Elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int j=1;j<n;j++)
    {
    for(int i=0;i<n-j;i++)
    {
        if(array[i]<array[i+1])
        {
           int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }
    }
   
    }
    for(int i=0;i<n;i++)
    {
    cout<<array[i]<<" ";
    }
    return 0;
}