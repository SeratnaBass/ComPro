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
     ll n,m,k;
     cin>>n>>m>>k;
     vector<ll> a(n),b(m),sa(n+1),sb(m+1);
     sa[0] = 0,sb[0] = 0;
     for(ll i=0;i<n;i++){
         cin>>a[i];
         sa[i+1] = sa[i] + a[i];
     }
     for(ll i=0;i<m;i++){
         cin>>b[i];
         sb[i+1] = sb[i] + b[i];
     }
    
    ll ans = 0;
    ll right = m;
    for(ll left=0; left<=n; left++){
        while(right > 0 && sa[left] + sb[right] > k){
            right--;
        }
        if(right == 0 && sa[left] + sb[right] > k) continue;
        ans = max(ans,right + left);
    }


     cout<<ans<<endl;
 }