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
    string s,t;
    cin>>s>>t;
    bool ok = true;
    if(s.length() + 1 == t.length()){
        for(int i = 0; i < s.length(); i++){
            if(s[i] != t[i]) ok = false;
        }
        if(ok) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}