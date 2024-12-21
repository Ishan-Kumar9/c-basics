#include<iostream>
using namespace std;
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int left = 0;
    int right = 9;
    int t =11; 
    while(left<right){
        int mid = (left+right)/2;
        if (arr[mid]==t){
        cout<<"yes";
        break;
        }
        else if(arr[mid]<t){
            left = mid + 1;

        }
        else{
            right = mid - 1;

        }
  }
    if(left ==right){
        cout<<"Element not found.";
    }
    return 0;
}