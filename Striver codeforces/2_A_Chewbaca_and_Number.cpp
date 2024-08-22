#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin>>s;

    for(auto &a:s)
    {
        if(a>'4'){
            a= '9'-a+'0';
        }
    }

    if(s.front()=='0'){
        s.front()='9';
    }
    cout<<s;
    return 0;
}