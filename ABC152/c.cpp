#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> p(n);
    int m=n+1;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(p[i]<m){
            ans++;
        }
        m=min(m,p[i]);
    }
    cout<<ans<<endl;
}
