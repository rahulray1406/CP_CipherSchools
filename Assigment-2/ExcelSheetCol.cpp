#include<bits/stdc++.h>
using namespace std;
string colTitle(int n) {

    string res;

    char tmp;

    while(n){

        n -= 1;

        tmp = 'A' + n % 26;

        res = tmp + res;

        n /= 26;

    }

    return res;

}
int main()
{
    int n;
    cout<<"Enter the col number \n";
    cin>>n;
    cout<<colTitle(n)<<endl;
}