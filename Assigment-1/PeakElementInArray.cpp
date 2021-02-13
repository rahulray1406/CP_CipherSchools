/*Using Divide and Conquer approch (binary search) we can solve the problem in O(logn) time*/
#include<bits/stdc++.h>
using namespace std;
int peakEle(vector<int> vec,int low,int high,int len)
{
    int mid=low + (high-low)/2;
    if((mid==0 || vec[mid]>=vec[mid-1]) && (mid== len-1 || vec[mid]>=vec[mid+1]))
        return mid;
    else if(mid>0 && vec[mid]<vec[mid-1])
        return peakEle(vec,low,(mid-1),len);
    else
        return peakEle(vec,(mid+1),high,len);
}
int main()
{
    int len;
    cout<<"Enter the len\n";
    cin>>len;
    vector<int> vec(len);
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>vec[i];
    }
    cout<<"Peak Elements at index"<<peakEle(vec,0,len-1,len)<<"and element is "<<vec[peakEle(vec,0,len-1,len)]<<endl;
    return 0;
}