#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,n;cin>>h>>n;
    int a;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    if(sum>=h){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
