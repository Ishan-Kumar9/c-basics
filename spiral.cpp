#include<iostream>
using namespace std;
int main()
{
    int n,m,c;
    cout<<"Enter the size of row: ";
    cin>>n;
    cout<<"Enter the size of col: ";
    cin>>m;
    
    int array[n][m];
    cout<<"Enter "<<n*m<<" Elements:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>array[i][j];
        
    }
    int row_start =0,row_end = n-1, column_start = 0, column_end = m-1;
    while(row_start <= row_end && column_start <= column_end )
    {
        for(int col = column_start; col<= column_end; col++){
            cout<<array[row_start][col]<<" ";
        }
        row_start++;

        for(int row = row_start; row<= row_end; row++)
        cout<<array[row][column_end]<<" ";
        column_end--;

        for(int col= column_end; col>=column_start; col-- )
        cout<<array[row_end][col]<<" ";
        row_end--; 

       for(int row=row_end; row>=row_start;row--)
       {
        cout<<array[row][column_start]<<" ";
       }
       column_start++;

    }
    

}