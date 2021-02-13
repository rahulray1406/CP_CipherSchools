#include<bits/stdc++.h>
using namespace std;
void dutchNationalFlag(vector<int>&vec)
{
    int start = 0, end = vec.size() - 1;
    while(start <= end) {
        while (vec[start] == 0) {
            start++;
        }

        while(vec[end] == 1) {
            end--;
        }

        if (start <= end) {
            swap(vec[start], vec[end]);
            start++;
            end--;
        }
    }
}
int main()
{   int len;
    cout<<"enter the len";
    cin>>len;
    vector<int> vec (len);
    cout<<"enter the array elements\n";
    for(int i=0;i<len;i++)
    {
        cin>>vec[i];  
    }
    dutchNationalFlag(vec);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;

}