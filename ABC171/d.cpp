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
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<pair<bool,ll>> use(100010);
    ll sum = 0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
        use[a[i]].first = true;
        use[a[i]].second++;
    }
    ll q;
    cin>>q;
    vector<ll> b(q),c(q);
    vector<ll> ans;
    for(ll i=0;i<q;i++){
        cin>>b[i]>>c[i];
        if(use[b[i]].first){
            sum += c[i] * use[b[i]].second;
            sum -= b[i] * use[b[i]].second;
            use[c[i]].first = true;
            use[c[i]].second += use[b[i]].second;
            use[b[i]].second = 0;
            use[b[i]].first = false;
        }
        ans.push_back(sum);
    }

    for(ll i=0;i<q;i++){
        cout<<ans[i]<<endl;
    }
 }