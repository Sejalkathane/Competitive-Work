#include<bits/stdc++.h>
using namespace std;


///  Wrong at test case 10::: 

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=0;
    if(n>=1) {sum+=v[n-1];}
    for(int i=n-2;i>=0;i--)
    {
        v[i]=min(v[i],v[i+1]-1);
         if (v[i] < 0) {
            v[i] = 0;
        }
        sum+=v[i];
    }
    cout<<sum;
}