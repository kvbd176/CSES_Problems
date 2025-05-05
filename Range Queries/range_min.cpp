#include <bits/stdc++.h>
using namespace std;
 
const int maxn=200005;
const int logn=20;
int st[maxn][logn];
int logtable[maxn];
int main(){
int n,q;
cin>>n>>q;
for(int i=1;i<=n;i++) cin>>st[i][0];
logtable[1]=0;
for(int i=2;i<=n;i++)logtable[i]=logtable[i/2]+1;
for(int j=1;(1<<j)<=n;j++){
for(int i=1;i+(1<<j)-1<= n;i++){
st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);
}
}
while(q--){
int l,r;
cin>>l>>r;
int k=logtable[r-l+1];
int res=min(st[l][k],st[r-(1<<k)+1][k]);
cout<<res<<endl;
}
}
