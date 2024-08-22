#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row;
    cin>>col;

    bool t=true;
     int i=0;
    while(i!=row)
    {
       if(i%2==0) {
        for(int i=0;i<col;i++)
        {
           cout<<'#';
        }
        cout<<endl;
       }
       else if((i%2)!=0 && t==true)
       {
           for(int i=0;i<col-1;i++){
            cout<<'.';
           }
           cout<<'#';
           cout<<endl;
           t=false;
       }
       else if((i%2)!=0 && t==false){
           cout<<'#';
        for(int i=0;i<col-1;i++){
            cout<<'.';
           }
           cout<<endl;
           t=true;
       }
       i++;
    }
   
}