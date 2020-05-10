#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<list>
#include<functional>


using namespace std;
using ll = long long;

string hanten(string s){
    string result;
    for(int i=0;i<s.length();i++){
        result += s[s.length()-1-i];
    }
    return result;
}

int main(){
    string s;
    int q;
    cin>>s>>q;
    int t[q],f[q] = {};
    char c[q] = {};

    string sentou,matubi;
    int hantennum = 0;

    for(int i=0;i<q;i++){
        cin>>t[i];
        if(t[i] == 1){
            hantennum++;
            //string tmp = sentou;
            //sentou = matubi;
            //matubi = tmp;
            //hanten(sentou);
            //hanten(matubi);
        }
        if(t[i] == 2){
            cin>>f[i]>>c[i];
            if(hantennum % 2 == 0){
                if(f[i] == 1) sentou = c[i] + sentou;
                else matubi = matubi + c[i];
            }
            else{
                if(f[i] == 2) sentou = c[i] + sentou;
                else matubi = matubi + c[i];
            }
        }
    }
    s = sentou + s + matubi;

    if(hantennum % 2 == 0) cout<<s<<endl;
    else {
        s = hanten(s);
        cout<<s<<endl;
    }
}
