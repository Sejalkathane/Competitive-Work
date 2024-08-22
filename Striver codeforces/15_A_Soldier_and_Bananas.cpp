#include<bits/stdc++.h>
using namespace std;

int main()
{
     int k,n,w;
     cin>>k;
     cin>>n;
     cin>>w;
     int sum=0;
     for(int i=1;i<=w;i++){
        sum+=k*i;
     }

     int ans=sum-n;
     if(ans<0) cout<<0;
     else{
        cout<<ans;
     }
}