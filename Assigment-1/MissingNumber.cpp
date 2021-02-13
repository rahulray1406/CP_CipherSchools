#include <iostream>
using namespace std;
int missing(int arr[], int len)
{
    int miss = 0;
    for (int i = 0; i < len; i++)
    {
        miss = miss ^ (i + 1) ^ arr[i];
    }
    miss = miss ^ (len + 1);
    return miss;
}
int main()
{
    int len;
    cout << "enter the len\n";
    cin >> len;
    int arr[len];
    cout << "enterr the elements\n";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    cout << missing(arr, len)<<endl;
}