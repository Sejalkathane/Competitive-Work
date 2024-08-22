#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    

    vector<long long>ans;
     if(n==1) {cout<<1; return 0;}
    if(n<=3) {cout<<"NO SOLUTION"; return 0;}

    for(int i=1;i<=n;i++){
       if(i%2==0){
        ans.push_back(i);
       }
    }
    for(int i=1;i<=n;i++){
       if(i%2!=0){
        ans.push_back(i);
       }
    }

    for(auto a:ans){
        cout<<a<<" ";
    }
}