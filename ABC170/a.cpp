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
    int x[5];
    int ans;
    for(int i=0;i<5;i++){
        cin>>x[i];
        if(x[i] == 0){
            ans = i+1;
        }
    }
    cout<<ans<<endl;
}