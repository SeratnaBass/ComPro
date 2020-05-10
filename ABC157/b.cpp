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
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int n;
    cin>>n;
    int b[n];
    bool ok[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ok[i][j]=false;
        }
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(b[i] == a[j][k]) ok[j][k] = true;
            }
        }
    }
    bool bingo =false;
    for(int i=0;i<3;i++){
        if(ok[i][0]==true&&ok[i][1]==true&&ok[i][2]==true) bingo=true;
        if(ok[0][i]==true&&ok[1][i]==true&&ok[2][i]==true) bingo=true;
        if(ok[0][0]==true&&ok[1][1]==true&&ok[2][2]==true) bingo=true;
        if(ok[2][0]==true&&ok[1][1]==true&&ok[0][2]==true) bingo=true;
    }
    if(bingo) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
