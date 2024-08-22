#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    int maxi=max(max(n1,n2),n3);
    int mini=min(min(n1,n2),n3);

    cout<<maxi-mini;
}