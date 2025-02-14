#include<bits/stdc++.h>
using namespace std;
int main(){
int n,q,i;
cin>>n>>q;
vector<long long> v(n);
for(i=0;i<n;i++) cin>>v[i];
for(i=1;i<n;i++) v[i]=v[i]^v[i-1];
while(q>0){
int a,b;
cin>>a>>b;
if(a==1) cout<<v[b-1]<<endl;
else cout<<(v[b-1]^v[a-2])<<endl;
q--;
}
}
