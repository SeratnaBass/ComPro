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
    int a,b,c,k;
    cin>>a>>b>>c>>k;
    if(k <= a) cout<<k<<endl;
    else if(k <= a+b) cout<<a<<endl;
    else cout<< a - (k - a - b) <<endl;
}