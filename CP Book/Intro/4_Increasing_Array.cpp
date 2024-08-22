#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    long long total=0;
    long long curr=v[0];

    for(int i=1;i<n;i++){
        if(curr>v[i]){
            total +=(curr-v[i]);
        }
        else{
            curr=v[i];
        }
    }
    cout<<total<<endl;

}