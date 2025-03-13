#include<bits/stdc++.h>
using namespace std;
int main(){
long int x,n,i,j;
long int mod=1e9+7;
cin>>n>>x;
vector<long int> c(n);
for(i=0;i<n;i++) cin>>c[i];
vector<long int> dp(x+1,0);
dp[0]=1;
for(i=0;i<n;i++){
for(j=c[i];j<=x;j++){
dp[j]=(dp[j]+dp[j-c[i]])%mod;
}
}
cout<<dp[x]<<endl;
}
