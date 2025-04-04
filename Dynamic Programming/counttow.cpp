#include<bits/stdc++.h>
using namespace std;
 
int main(){
const long long mod=1e9+7;
vector<vector<long long>> dp(1e6+2,vector<long long>(2));
int t;
cin>>t;
while(t--){
long long n,i;
cin>>n;
dp[n][0]=1;
dp[n][1]=1;
for(i=n-1;i>=1;i--){
dp[i][0]=(2*dp[i+1][0]+dp[i+1][1])%mod;
dp[i][1]=(4*dp[i+1][1]+dp[i+1][0])%mod;
}        
cout<<(dp[1][0]+dp[1][1])%mod<<endl;
}
}
