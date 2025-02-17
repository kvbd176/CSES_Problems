#include<bits/stdc++.h>
using namespace std;
long int inv(long int a){
long int mod=1000000007;
long int res=1,exp=mod-2;
while(exp>0){
if(exp%2==1){
res=(res*a)%mod;
}
a=(a*a)%mod;
exp/=2;
}
return res;
}
int main(){
long int n,i;
long int mod=1000000007;
cin>>n;
if(n%2!=0){
cout<<0<<endl;
}
else{
n/=2;
vector<long int>v(2*n+1,1);
vector<long long>t(2*n+1,1);
for(i=2;i<=2*n;i++){
v[i]=(v[i-1]*i)%mod;
}
t[2*n]=inv(v[2*n]);
for(i=2*n-1;i>=1;i--){
t[i]=(t[i+1]*(i+1)) %mod;
}
long int ans=v[2*n]*t[n]%mod;
ans=ans*t[n+1]%mod;
cout<<ans<<endl;
}
}
