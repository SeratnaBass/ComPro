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
    int n,m;
    cin>>n>>m;
    int a,b;
    Graph G(n);
    for(int i=0;i<m;i++){
        cin>>a>>b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    vector<int> dist(n,-1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(int nv : G[v]){
            if(dist[nv] != -1) continue;
            dist[nv] = v;
            que.push(nv);
        }
    }

    bool ok = true;
    for(int i=0;i<n;i++){
        if(dist[i] == -1) ok = false;
    }

    if(ok){
        cout<<"Yes"<<endl;
        for(int i=1;i<n;i++) cout<<dist[i]+1<<endl;
    }
    else cout<<"No"<<endl;
}