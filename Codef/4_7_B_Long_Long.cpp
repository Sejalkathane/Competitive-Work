#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        long long sum=0;
        long long count=0;
        bool t=false;
       
        for(auto i:arr)
        {
            sum+=abs(i);
            if(i<0 && !t)
            {
                t=true;
                count+=1;
            }
            if(i>0)
            {
                t=false;
            }
        }

        cout<<sum<<" "<<count<<endl;
        

    }
    return 0;
}


//TLE:: 
//  long long low=0;
//         long long high=n;
//         long long count=0;
//         long long sum=0;
        
//         for(int i=0;i<n;i++)
//         {
//             sum=sum+abs(arr[i]);
//         }
//         while(low<=high)
//         {
//             if(arr[low]<0 && arr[high]<0)
//             {
//                 for(int i=low;i<=high;i++)
//                 {
//                     arr[i]=arr[i]*-1;
//                 }
//                 count++;
//                 low++;
//                 high--;
//             }
//             else if(arr[low]<0 && arr[high]>=0)
//             {
//                 high--;
//             }
//             else if(arr[low]>=0 && arr[high]<0)
//             {
//                 low++;
//             }
//             else
//             {
//                 low++;
//                 high--;
//             }
//         }
        
//         cout<<sum<<" "<<count<<endl;