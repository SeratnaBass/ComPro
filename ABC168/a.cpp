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
    int n;
    cin>>n;
    if(n%10 == 3) cout<<"bon"<<endl;
    else if(n%10 == 0 || n%10 == 1 || n%10 == 6 || n%10 == 8){
        cout<<"pon"<<endl;
    }
    else cout<<"hon"<<endl;
}