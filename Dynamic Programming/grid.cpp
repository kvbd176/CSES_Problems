#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i,j;
long int mod=1e9+7;
cin>>n;
char a[n][n];
for(i=0;i<n;i++){
for(j=0;j<n;j++){
cin>>a[i][j];
}
}
vector<vector<long int>>dp(n,vector<long int>(n));
if(a[n-1][n-1]=='.') dp[n-1][n-1]=1;
else dp[n-1][n-1]=0;
for(i=n-1;i>=0;i--){
for(j=n-1;j>=0;j--){
if(i==n-1 && j==n-1) continue;
if(a[i][j]=='*') dp[i][j]=0;
else{
long int d=(i<n-1)?dp[i+1][j]:0;
long int r=(j<n-1)?dp[i][j+1]:0;
dp[i][j]=(d+r)%mod;
}
}
}
cout<<dp[0][0]<<endl;
}
