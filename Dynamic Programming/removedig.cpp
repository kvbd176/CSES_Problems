#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
vector<int> dp(n+1,1e9);
dp[0]=0;
for(i=1;i<=n;i++){
string s=to_string(i);
for(auto it:s){
int d=it-'0';
if(d!='0') dp[i]=min(dp[i],dp[i-d]+1);
}
}
cout<<dp[n]<<endl;
}

