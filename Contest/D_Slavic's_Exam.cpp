#include <iostream>
using namespace std;
#include <string>
void prog(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int count = 0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='?')
            count++;
    }
        int k = 0;
        for(int i=0;i<s1.length();i++){
            if(k<s2.length()){
                if(s1[i]==s2[k]||s1[i]=='?'){
                    s1[i]=s2[k];
                    k++;
                }
            }
            else if(s1[i]=='?'){
                s1[i]='a';
            }
        }
    if(k==s2.length()){
        cout<<"YES"<<endl<<s1<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main() {
    int n;
    cin>>n;
    while(n--){
        prog();
    }
    return 0;
}
