#include<bits/stdc++.h>
using namespace std;
int main(){
    long long h;cin>>h;
    long long ans=1;
    long long jou=0;
    while(h/2!=0){
        jou++;
        h=h/2;
        ans+=pow(2,jou);
    }
    cout<<ans<<endl;
}
