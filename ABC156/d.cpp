#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9+7;

ll repsq(ll n,ll p){
    if(p == 0) return 1;
    if(p & 1) return n * repsq(n,p-1) % MOD;
    else {
        ll t = repsq(n,p/2) % MOD;
        return t * t % MOD;
    }
}

int main(){
    ll n,a,b;cin>>n>>a>>b;
    ll ans = (repsq(2,n) -1) % MOD;

    ll x_a = 1,y_a = 1;
    ll x_b = 1,y_b = 1;
    ll dis_a = 1,dis_b = 1;

    for(ll i=0;i<a;i++){
        x_a = x_a * (n-i) % MOD;
        y_a = y_a * (i+1) % MOD;
    }
    dis_a = ( x_a * (repsq(y_a,MOD-2) % MOD) ) % MOD;

    for(ll i=0;i<b;i++){
        x_b = x_b * (n-i) % MOD;
        y_b = y_b * (i+1) % MOD;
    }
    dis_b = ( x_b * (repsq(y_b,MOD-2) % MOD) ) % MOD;
    

    ans = (ans - dis_a - dis_b + 3*MOD) % MOD;

    cout<< (ans + MOD) % MOD <<endl;
}
