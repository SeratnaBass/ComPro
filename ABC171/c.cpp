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
    ll len,sum = 0;
    for(ll i=1;i<13;i++){
        if(sum <= n && n <= sum + pow(26,i)){
            len = i;
            break;
        }
        sum += pow(26,i);
    }

    string ans;
    for(ll i=0;i<len;i++){
        char a = 'a' + (n-1)%26;
        ans.push_back(a);
        n = (n-1)/26;
    }

    for(ll i=len-1;i>=0;i--) cout<<ans[i];
    cout<<endl;
}