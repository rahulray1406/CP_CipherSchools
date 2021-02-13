#include <iostream>
using namespace std;
bool res(int x1,int x2,int v1,int v2)
{
    if (x1 > x2 && v1 >=v2) 
       return false;
    if (x1 < x2 && v1 <= v2) 
       return false;
    if (x1 < x2) 
    { 
        swap(x1, x2); 
        swap(v1, v2); 
    }
    return((x1 - x2) % (v1 - v2) == 0);
    
}
int main()
{
    int x1,x2,v1,v2;
    cout<<"Enter x1 value \n";
    cin>>x1;
    cout<<"Enter x2 value \n";
    cin>>x2;
    cout<<"Enter v1 value \n";
    cin>>v1;
    cout<<"Enter v2 value \n";
    cin>>v2;
    if(res(x1,x2,v1,v2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}