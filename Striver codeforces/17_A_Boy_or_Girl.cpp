#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin>>s;

  unordered_map<char,int>mp;

  for(auto a:s){
    mp[a]++;
  }

  if(mp.size()%2!=0)cout<<"IGNORE HIM!";
  else{
    cout<<"CHAT WITH HER!";
  }
}