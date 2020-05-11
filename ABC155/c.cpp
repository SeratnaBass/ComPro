#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string> s(n+1);
    string ans;
    int suc=1,tmp=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    s[n]="|||";
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            suc++;
        }
        else{
            if(suc>tmp){
                ans=s[i];
                tmp=suc;
            }
            else if(suc==tmp){
                ans+="/"+s[i];
            }
            suc=1;
        }
        //cout<<suc<<tmp<<endl;
    }
    for(int i=0;i<ans.length();i++){
        if(ans[i]=='/'){
            cout<<endl;
        }
        else{
            cout<<ans[i];
        }
    }
    cout<<endl;
}
