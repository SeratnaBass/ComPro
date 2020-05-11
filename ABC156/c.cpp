#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    long long ans=1000000000;
    sort(x.begin(),x.end());

    for(int i=x[0];i<=x[n-1];i++){
        long long tmp=0;
        for(int j=0;j<n;j++){
            tmp+=pow(x[j]-i,2);
        }
        ans=min(ans,tmp);
    }

    cout<<ans<<endl;
}
