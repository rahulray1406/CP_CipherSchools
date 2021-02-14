/*time O(m+n) Aux space is O(1)*/
#include <bits/stdc++.h>
using namespace std;
void printMat(vector<vector<int>> mat, int x)
{
    int row = mat.size() ;
    int i = 0, j = mat[0].size() - 1;
    while (i < row && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << "(" << i << " , " << j << ")" << endl;
            return;
        }
        else if (mat[i][j] > x)
            j--;
        else
        {
            i++;
        }
    }
    cout << "Element Not Found" << endl;
}
int main()
{
    vector<vector<int>> mat = {{10, 20, 30, 40},
                               {15, 25, 35, 45},
                               {27, 29, 35, 45},
                               {32, 33, 39, 50}};
    int x;
    x = 50;
    printMat(mat, x);

    return 0;
}