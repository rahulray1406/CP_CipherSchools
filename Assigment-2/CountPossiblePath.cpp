#include <bits/stdc++.h>   
using namespace std; 
int countOfPaths(int m, int n) 
{ 
    int path[n] = { 1 }; 
    path[0] = 1; 
    for (int i = 0; i < m; i++) { 
        for (int j = 1; j < n; j++) { 
            path[j] += path[j - 1]; 
        } 
    } 
    return path[n - 1]; 
}  
int main() 
{   int m,n;
    cout<<"Enter the values \n";
    cin>>m>>n;
    cout << countOfPaths(m, n); 
}