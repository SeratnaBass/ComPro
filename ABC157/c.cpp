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

int keta(int n){
    int result = 1;
    int tmp = n;
    while((tmp/10)>0){
        result++;
        tmp/=10;
    }
    return result;
}

int ketanum(int n,int s){
    n /= pow(10,keta(n)-s);
    return n%10;
}

int main(){
    int n,m;
    cin>>n>>m;
    int s[m],c[m];
    for(int i=0;i<m;i++){
        cin>>s[i]>>c[i];
    }
    int ans=-1;

    for(int i=0;i<pow(10,n);i++){
        if(keta(i)!=n) continue;
        bool ok=true;
        for(int j=0;j<m;j++){
            if(ketanum(i,s[j])!=c[j]) ok=false;
        }
        if(ok){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
