#include <bits/stdc++.h>
using namespace std;
int main(){
int n,i,l;
cin>>n;
vector<int> x(n);
for(i=0;i<n;i++) cin>>x[i];
vector<vector<long long>> dp(n,vector<long long>(n,0));
for(i=0;i<n;i++) dp[i][i]=x[i];
for(l=2;l<=n;l++){
for(i=0;i+l-1<n;i++){
int j=i+l-1;
long long temp1,temp2;
if(i+2<=j) temp1=min(dp[i+2][j],dp[i+1][j-1]);
else temp1=dp[i+1][j-1];
if(i<=j-2) temp2=min(dp[i][j-2],dp[i+1][j-1]);
else temp2=dp[i+1][j-1];
dp[i][j]=max(x[i]+temp1,x[j]+temp2);
}
}
cout<<dp[0][n-1]<<endl;
return 0;
}
