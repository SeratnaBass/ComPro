#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<list>

using namespace std;
using ll = long long;

const int MAX_N = 1e5+1;
int par[MAX_N];
int treesize[MAX_N];

void init(int n){
    for(int i=0;i<=n;i++){
        par[i] = i;
        treesize[i] = 1;
    }
}

int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
}

bool same(int x, int y){
    return find(x) == find(y);
}

void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;
    else {
        treesize[y] += treesize[x];
        par[x] = y;
    }
}

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    init(n);
    
    int a[m],b[m];
    int c[k],d[k];

    int kouho[n+1] = {};

    for(int i=0;i<m;i++){
        cin>>a[i]>>b[i];
        unite(a[i],b[i]);
        kouho[a[i]]--;
        kouho[b[i]]--;
    }

    for(int i=0;i<=n;i++){
        kouho[i] += treesize[find(i)] - 1;
    }

    for(int i=0;i<k;i++){
        cin>>c[i]>>d[i];
        if(same(c[i],d[i])){
            kouho[c[i]]--;
            kouho[d[i]]--;
        }
    }

    for(int i=1;i<=n;i++){
        cout<<kouho[i]<<" ";
    }
    cout<<endl;
}
