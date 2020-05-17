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
    double a,b,h,m;
    cin>>a>>b>>h>>m;
    double htheta,mtheta;
    htheta = 360 / 12 * (h+m/60);
    mtheta = 360 / 60 * m;
    double dtheta = abs(htheta - mtheta);
    if(abs(htheta - mtheta) > 180){
        dtheta = 360 - dtheta;
    }
    dtheta *= M_PI / 180;

    double ans = 0;
    if(dtheta <= 90){
        double sq = a*a*sin(dtheta)*sin(dtheta) + (b-a*cos(dtheta))*(b-a*cos(dtheta));
        ans = sqrt(sq);
    }
    else{
        double sq = a*a*sin(dtheta)*sin(dtheta) + (-a*cos(dtheta)+b)*(-a*cos(dtheta)+b);
        ans = sqrt(sq);
    }

    printf("%.25f\n", ans);
}