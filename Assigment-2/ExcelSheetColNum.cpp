#include<bits/stdc++.h>
using namespace std;
int titleToNumber(string s) {
        int col = 0;
        for(int i = s.length(); i > 0; i--) {
            col += (s[i - 1] - 'A' + 1) * pow(26, (s.length() - i));
        }
        return col;
}
int main()
{
    string s;
    getline(cin,s);
    cout<< titleToNumber(s)<<endl;
}