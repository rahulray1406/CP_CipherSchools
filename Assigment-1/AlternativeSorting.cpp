/*we can solve this problemm in O(nlogn) time by soting the whole array*/
#include<bits/stdc++.h>
using namespace std;
void sortInAlternate(int arr[],int len)
{
    sort(arr,arr+len);
    int low=0,high=len-1;
    while (low<high)
    {
        cout<<arr[high--]<<" ";
        cout<<arr[low++]<<" ";
    }
    if(len%2!=0)
    {
        cout<<arr[low]<<endl;
    }
    
}
int main()
{
    int len;
    cin>>len;
    int arr[len];
    cout<<"Enter the array elements\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    sortInAlternate(arr,len);
    return 0;
}