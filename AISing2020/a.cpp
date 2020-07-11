#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <list>
#include <sstream>

#define endl "\n"
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
const ll INF = 1e18;
#define REP(i, n) for(int i = 0; i < n; i++)
using Graph = vector<vector<int>>;

int main(){
    int l,r,d;
    cin>>l>>r>>d;
    int ans = 0;
    for(int i=l;i<=r;i++){
        if(i % d == 0) ans++;
    }
    cout<<ans<<endl;
}