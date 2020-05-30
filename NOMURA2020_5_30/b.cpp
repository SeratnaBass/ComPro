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
    string t;
    cin>>t;
    int ans = 0;
    for(int i=0;i<t.length();i++){
        if(t[i] == '?') t[i] = 'D';
    }
    for(int i=0;i<t.length()-1;i++){
        if(t[i] == 'D') ans++;
        else if(t[i] == 'P' && t[i+1] == 'D') ans++;
    }
    if(t[t.length()-1] == 'D') ans++;
    cout<<t<<endl;
}