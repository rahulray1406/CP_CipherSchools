#include <bits/stdc++.h>
using namespace std;

void SipralMat(vector<vector<int>> mat)
{
    int top = 0, bottom = mat.size() - 1, left = 0, right = mat[0].size() - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;

        for (int j = top; j <= bottom; j++)
        {
            cout << mat[j][right] << " ";
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int j = bottom; j >= top; j--)
            {
                cout << mat[j][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    SipralMat(mat);
    return 0;
}