#include <bits/stdc++.h>
using namespace std;
long long modu(long long a,long long n,long long mod){
long long res=1;
while(n>0){
if(n%2==1) res=(res*a)%mod;
a=(a*a)%mod;
n/=2;
}
return res;
}
int main(){
long long mod=1e9+7;
long long n;
cin>>n;
while(n>0){
long long a,b,c;
cin>>a>>b>>c;
long long res=modu(b,c,mod-1);
res=modu(a,res,mod);
cout<<res<<endl;
n--;
}
}
