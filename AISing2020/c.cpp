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
    ll n;
    cin>>n;
    ll ans[n+1] = {};
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            for(int k=j;k*k<=i;k++){
                for(int l=k;l*l<=i;l++){
                    if((j+k+l)*(j+k+l)-(j*k+k*l+l*j) == i){
                        if(j == k && k == l){
                            ans[i]++;
                        }
                        else if(j == k || k == l || l == j){
                            ans[i] += 3;
                        }
                        else ans[i] += 6;
                    }
                }
            }
        }
        cout<<ans[i]<<endl;
    }
}