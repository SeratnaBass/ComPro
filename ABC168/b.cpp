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
    int k;
    cin>>k;
    string s;
    cin>>s;
    if(s.length() <= k) cout<<s<<endl;
    else{
        for(int i=0;i<k;i++) cout<<s[i];
        cout<<"..."<<endl;
    }
}