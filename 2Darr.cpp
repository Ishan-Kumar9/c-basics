#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the size of Row: ";
    cin>>row;
    cout<<"Enter the size of Column: ";
    cin>>col;
    int array[row][col];
    cout<<"Enter the Elements of the matrix:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"Matrix of "<<row<<" * "<<col<<":\n";
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(array[j][i] == x)
            {
            cout<<"Row= "<<i <<" & Column= "<< j<<"\n " ;
            flag=true;
            }

        }
    }
    if(flag)
    {
        cout<<"Element is found\n";
    }
    else
    {
        cout<<"Element is not found\n";
    }
    
    return 0;
}