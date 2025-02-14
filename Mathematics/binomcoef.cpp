#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
long int mod=1000000007;
long int maxi=1000000,i;
vector<long int> fact(maxi+1);
vector<long int> v(maxi+1);
fact[0]=1;
for(i=1;i<=maxi;i++) fact[i]=fact[i-1]*i%mod;
long int res=1,exp=mod-2,x=fact[maxi];
while(exp){
if(exp%2==1) res=(res*x)%mod;
x=(x*x)%mod;
exp/=2;
}
v[maxi]=res;
for(i=maxi-1;i>=0;i--) v[i]=v[i+1]*(i+1)%mod;
while(t>0){
int a,b;
cin>>a>>b;
if(b>a) cout<<0<<endl;
else{
long int ans=fact[a]*v[b]%mod*v[a-b]%mod;
cout<<ans<<endl;}
t--;
}
}
