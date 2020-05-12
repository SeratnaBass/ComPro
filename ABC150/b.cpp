#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            if(s[i+1]=='B'){
                if(s[i+2]=='C'){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
