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

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans = 0;
    if(n < a+b) ans = min(n,a);
    else {
        ans = a* (n/(a+b));
        if(n%(a+b) != 0) ans += min(n%(a+b),a);
    }


    cout<<ans<<endl;
}
