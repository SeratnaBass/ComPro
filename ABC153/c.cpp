#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<long long> h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    long long ans=0;
    sort(h.begin(),h.end());
    for(int i=0;i<n-k;i++){
        ans+=h[i];
    }
    cout<<ans<<endl;
}
