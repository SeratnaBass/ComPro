#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<double> p(n);
    vector<double> w(n+1,0);
    for(int i=0;i<n;i++){
        cin>>p[i];
        w[i+1]=w[i]+p[i]*(p[i]+1)/(2.0*p[i]);
    }
    double ans=0.0;
    for(int i=k;i<n+1;i++){
        ans=max(w[i]-w[i-k],ans);
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
}
