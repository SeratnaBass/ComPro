#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,m;cin>>n>>m;
    int p;
    string s;
    vector<bool> c(n,false);
    vector<int> pen(n,0);
    for(int i=0;i<m;i++){
        cin>>p>>s;
        if(s=="AC"){
            c[p-1] = true;
        }
        else if(s=="WA"&&c[p-1]==false){
            pen[p-1]++;
        }
    }
    int ac=0;
    int pensum=0;
    for(int i=0;i<n;i++){
        if(c[i]==true){
            ac++;
            pensum += pen[i];
        }
    }
    cout<<ac<<' '<<pensum<<endl;
}
