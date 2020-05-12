#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int ans=0;
    int noans=max(a,b);
    for(int i=0;i<max(a,b);i++){
        ans+=pow(10,i)*min(a,b);
    }
    cout<<ans<<endl;
}
