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
    int x,n;
    cin>>x>>n;
    vector<int> p(n);
    vector<bool> used(110,false);
    for(int i=0;i<n;i++){
        cin>>p[i];
        used[p[i]] = true;
    }
    int tmp = 150, ans = 0;
    for(int i=0;i<=101;i++){
        // cout<<i<<" ";
        if(used[i]) continue;
        ans = (tmp > abs(x - i)) ? i : ans;
        tmp = min(tmp, abs(x-i));
        // cout<<abs(x - i)<<endl;
    }

    cout<<ans<<endl;
}