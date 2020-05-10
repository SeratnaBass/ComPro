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
    ll x;
    cin>>x;
    ll ans = x / 500 * 1000;
    if(x-x/500*500 >= 0){
        x -= x / 500 * 500;
        ans += x / 5 * 5;
    }
    else ans += x/5 * 5;

    cout<<ans<<endl;
}
