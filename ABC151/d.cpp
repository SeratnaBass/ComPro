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
    int h,w;cin>>h>>w;
    char s[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>s[i][j];
        }
    }

    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    int ans = 0;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j] == '#') continue;

            vector<vector<int>> dist(h,vector<int>(w,-1));
            queue<pair<int,int>> que;

            dist[i][j] = 0;
            que.emplace(i,j);

            while(!que.empty()){
                pair<int,int> v = que.front();
                que.pop();

                for(int dir = 0; dir < 4; dir++){
                    int nh = v.first + dx[dir];
                    int nw = v.second + dy[dir];
                    if(nh<0||nh>=h||nw<0||nw>=w) continue;
                    if(s[nh][nw] == '#') continue;
                    if(dist[nh][nw] != -1) continue;

                    dist[nh][nw] = dist[v.first][v.second] + 1;

                    que.emplace(nh,nw);
                }
            }
            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    ans = max(ans,dist[i][j]);
                }
            }
        }
    }

    cout<<ans<<endl;

}
