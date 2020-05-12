#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string> p(n),q(n);
    string P,Q;
    for(int i=0;i<n;i++){
        cin>>p[i];
        P+=p[i];
    }
    for(int i=0;i<n;i++){
        cin>>q[i];
        Q+=q[i];
    }
    string array[]={"1","2","3","4","5","6","7","8"};
    string per[100000];
    int j=0;
    int itr_p=0,itr_q=0;
    do{
        for(int i=0;i<n;i++){
            per[j]+=array[i];
        }
        if(per[j]<P){
            itr_p++;
        }
        if(per[j]<Q){
            itr_q++;
        }
        j++;
    }while(next_permutation(array,array+n));
    cout<<abs(itr_p-itr_q)<<endl;
}
