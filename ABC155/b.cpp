#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a(n);
    bool key=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
        if(a[i]%3!=0&&a[i]%5!=0){
            key=false;
        }
        }
    }
    if(key) cout<<"APPROVED"<<endl;
    else cout<<"DENIED"<<endl;
}
