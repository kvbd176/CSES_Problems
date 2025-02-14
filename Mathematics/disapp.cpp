#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,m;
cin>>n>>m;
long int mod=1000000007;
long int maxi=m+n-1  ,i;
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
long int temp;
for(i=maxi-1;i>=0;i--) v[i]=v[i+1]*(i+1)%mod;
long int a=m+n-1,b=n-1;
if(b>a) temp=0;
else temp=fact[a]*v[b]%mod*v[a-b]%mod; 
cout<<temp<<endl;
}
