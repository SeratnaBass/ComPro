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
    int a,b;
    cin>>a>>b;
    int ans = -1;

    for(int i=1;i<=1000;i++){
        if(i * 8/100 == a && i * 10/100 == b){
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;
}
