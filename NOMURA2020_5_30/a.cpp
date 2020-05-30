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
    int h1,m1,h2,m2,k;
    cin>>h1>>m1>>h2>>m2>>k;
    int time = h2*60+m2 - (h1*60+m1);
    int ans = time - k;
    cout<<ans<<endl;
}