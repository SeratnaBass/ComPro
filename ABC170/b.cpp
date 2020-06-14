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
    int x,y;
    cin>>x>>y;
    bool ok = false;
    for(int i=0;i<=x;i++){
        if(2*i + 4*(x-i) == y){
            ok = true;
        }
    }
    if(ok) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}