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
    Graph G(n);
    for(int i=0;i<n-1;i++){
        G[i].push_back(i+1);
        G[i+1].push_back(i);
    }
    int x,y;
    cin>>x>>y;
    G[x-1].push_back(y-1);
    G[y-1].push_back(x-1);

    vector<int> ans(n);

    for(int i=0;i<n;i++){
        vector<int> dist(n,-1);
        queue<int> que;

        dist[i] = 0;
        que.push(i);

        while(!que.empty()){
            int v = que.front();
            que.pop();

            for(int nv : G[v]){
                if(dist[nv] != -1) continue;
                //if(nv < i) continue;

                dist[nv] = dist[v] + 1;
                que.push(nv);

                ans[dist[nv]]++;
                //if(dist[nv] == 3) cout<<i<<" "<<nv<<endl;
            }
        }
    }

    for(int i=1;i<n;i++) cout<<ans[i]/2<<endl;
}
