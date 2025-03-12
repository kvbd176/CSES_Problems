#include<bits/stdc++.h>
using namespace std;
int main(){
long int x,n,i,j;
cin>>n>>x;
vector<long int> c(n);
for(i=0;i<n;i++) cin>>c[i];
vector<long int> dp(x+1,1e9);
dp[0]=0;
for(i=1;i<=x;i++){
for(j=0;j<n;j++){
if(c[j]<=i) dp[i]=min(dp[i],dp[i-c[j]]+1);
}
}
if(dp[x]<1e9) cout<<dp[x]<<endl;
else cout<<-1<<endl;
}
