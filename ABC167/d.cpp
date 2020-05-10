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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    vector<ll> kaisu(n,0);
    for(ll i=0;i<n;i++) cin>>a[i];

    ll p = 0;
    kaisu[0] = 1;
    ll r = 0;
    while(kaisu[p] < 2){
        p = a[p] - 1;
        kaisu[p]++;
        r++;
        if(r == k){
            cout<<p + 1<<endl;
            return 0;
        }
    }
    ll T = 0;
    vector<ll> c;
    while(kaisu[p] < 3){
        c.push_back(p);
        p = a[p] - 1;
        kaisu[p]++;
        T++;
    }
    for(int i=0;i<n;i++){
        if(kaisu[i] == 1){
            k -= r;
            break;
        }
    }
    ll ans = k % T;
    cout<<c[ans] + 1<<endl;
    //for(int i=0;i<c.size();i++) cout<<c[i]+1<<endl;
}