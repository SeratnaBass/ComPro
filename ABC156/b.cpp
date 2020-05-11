#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    int ans=0;
    
    for(int i=0;pow(k,i)<=n;i++){
        if(pow(k,i)<=n) ans=i;
    }

    cout<<ans+1<<endl;
}
