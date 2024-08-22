#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v(n-1);
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>v[i];
    }

    int sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
      sum1+=i;
    }

    for(int i=0;i<n-1;i++){
        sum2+=v[i];
    }
    
    cout<<sum1-sum2;

}