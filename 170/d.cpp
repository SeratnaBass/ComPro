#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<list>

#define endl "\n"
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
const ll INF = 1e18;
#define REP(i, n) for(int i = 0; i < n; i++)
using Graph = vector<vector<int>>;

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    ll ans = n;
    map<ll,bool> div;
    for(ll i=0;i<n;i++){
        if(div[a[i]]) ans--;
        else if(i != n-1){
            if(a[i] == a[i+1]) ans--;
        }
        for(ll j = 1;a[i] * j <= a[n-1];j++){
            if(a[i] * j > 1000000) continue;
            div[ a[i] * j ] = true;
        }
        // if(i == n-1) continue;
        // if(a[i] == a[i+1]) ans--;
    }

    if(ans < 0) cout<<0<<endl;
    else cout<<ans<<endl;
}