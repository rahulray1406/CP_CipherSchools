#include<bits/stdc++.h>
using namespace std;
int uniquePaths(int m, int n) {    //O(m*n) time
        vector<int> cur(n, 1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                cur[j] += cur[j - 1];
            }
        }
        return cur[n - 1];
}
int main()
{
int m,n;
cin>>m>>n;
cout<<uniquePaths(m,n);
return 0;

}