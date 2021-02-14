/*We can solve this problem in O(logn) using BInary Search and Aux space in O(1)*/
#include<bits/stdc++.h>
using namespace std;
int firstOcc(vector<int> vec,int x)
{
    int low=0,high=vec.size()-1;
    
    while (low<=high)
    {
        int mid=low+ (high-low)/2;
        if(vec[mid]>x)
            high=mid-1;
        else if(vec[mid]<x)
            low=mid+1;
        else
        {
            if(mid==0 || vec[mid]!=vec[mid-1])
                return mid;
            else
                high=mid-1;
        }
    }
    return -1;
}
int lastOcc(vector<int> vec,int x)
{
    
    int low=0,high=vec.size()-1;
    
    while (low<=high)
    {
        int mid=low+ (high-low)/2;
        if(vec[mid]>x)
            high=mid-1;
        else if(vec[mid]<x)
            low=mid+1;
        else
        {
            if(mid==vec.size()-1 || vec[mid]!=vec[mid+1])
                return mid;
            else
                low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int len,x;
    cout<<"Enter the len\n";
    cin>>len;
    vector<int> vec(len);
    cout<<"Enter the array elements\n";
    for(int i=0;i<len;i++)
    {
        cin>>vec[i];
    }
    cout<<"enter the elements to search for\n";
    cin>>x;
    cout<<"First index of "<<x<<" is "<<firstOcc(vec,x)<<endl;
    cout<<"Last index of "<<x<<" is "<<lastOcc(vec,x)<<endl;
}