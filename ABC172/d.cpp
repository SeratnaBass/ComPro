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
    vector<ll> yakusu(n);

    for(ll i=1;i<=n;i++){
        for(ll j=1;i*j<=n;j++){
            yakusu[i*j]++;
        }
    }

    ll ans = 0;
    for(ll i=1;i<=n;i++){
        ans += i*yakusu[i];
    }

    cout<<ans<<endl;
}