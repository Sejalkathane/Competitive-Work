#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int i=1;
    long long int m=n/2;
    while(i<=n){
        long long int tot = (i*i *( (i*i)-1)) /2;
        long long int ans=0;
        if(i>=3){
           ans=4*(i-1)*(i-2);
        }
        cout<<tot-ans<<endl;
        i++;
    }
}