#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 9, 12, 13, 5};
    int t = 10;
    int i;
    for (i = 0; i < 6; i++)
    {
        if (arr[i] == t)
        {
            cout << "Element found at index: "<<i<<endl;
            break;
        }
    }
   return 0;
}