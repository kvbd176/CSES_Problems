#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,i;
long int mod=1e9+7;
cin>>n;
vector<long int>v(n+1);
v[0]=1;
v[1]=0;
v[2]=1;
for(i=3;i<=n;i++){
v[i]=(i-1)*(v[i-1]+v[i-2])%mod;
}
cout<<v[n]<<endl;
}
