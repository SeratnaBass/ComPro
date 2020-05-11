#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    bool key=true;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            key=false;
        }
    }
    if(key) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
