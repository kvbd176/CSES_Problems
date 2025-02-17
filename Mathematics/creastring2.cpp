#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
long int n=s.length(),i;
long int mod=1e9+7;
vector<long int>fact(n+1,1);
vector<long int>inv(n+1,1);
for(i=2;i<=n;i++){
fact[i]=(fact[i-1]*i) % mod;
}
long int res=1;
long int exp=mod-2;
long int temp=fact[n];
while(exp>0){
if(exp%2==1){
res=(res*temp)%mod;
}
temp=(temp*temp)%mod;
exp/=2;
}
inv[n]=res;
for(i=n-1;i>0;i--){
inv[i]=(inv[i+1]*(i+1))%mod;
}
vector<long int> count(26,0);
for(i=0;i<n;i++){
count[s[i]-'a']++;
}
res=fact[n];
for(auto i:count){
if(i>0) res=(res*inv[i])% mod;
}
cout<<res<<endl;
}
