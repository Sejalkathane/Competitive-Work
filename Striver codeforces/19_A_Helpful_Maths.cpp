#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<int>v;

    for(auto a:s){
        if(isdigit(a)){
            v.push_back(a-'0');
        }
    }
    sort(v.begin(),v.end());

    string ans="";
     int i=0;
    for(auto a:v){
        ans+=to_string(a);
        if( i!=v.size()-1){
            ans+='+';
        }
        i++;
    }

    cout<<ans;
}