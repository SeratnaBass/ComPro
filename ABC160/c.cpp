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
    ll k,n;
    cin>>k>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    ll ans = a[n-1] - a[0];

    for(int i=0;i<n-1;i++){
        ans = min( ans, k-a[i+1] + a[i] );
    }

    cout<<ans<<endl;
}
