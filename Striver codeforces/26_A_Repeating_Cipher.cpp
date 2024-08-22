#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    string ans="";
    int i=0;
    int j=1;
    while(i<n)
    {
       ans+=s[i];
       i+=j;
       j++;
    }
    cout<<ans;
}