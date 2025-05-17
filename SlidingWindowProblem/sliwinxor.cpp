#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i;
    cin>>n>>k;
    long long x,a,b,c;
    cin>>x>>a>>b>>c;
    long long res=0;
    deque<long long> w;
    vector<long long> v;
    for(i=0;i<n;i++){
        if(i==0) v.push_back(x);
        else{
            x=(a*x+b)%c;
            v.push_back(x);
        }
    }
    long long temp=0;
    for(i=0;i<n;i++){
        w.push_back(v[i]);
        temp^=v[i];
        if(w.size()>k){
            temp^=w.front();
            w.pop_front();
        }
        if(w.size()==k){
            res^=temp;
        }
    }
    cout<<res<<endl;
}
