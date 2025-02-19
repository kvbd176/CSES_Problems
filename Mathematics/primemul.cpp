#include <bits/stdc++.h>
using namespace std; 
int main(){
long int n,j;
cin>>n;
int k,i;
cin>>k;
vector<long int> prime(k);
for(i=0;i<k;i++) cin>>prime[i];
vector<long int> temp(k+1,0);
for(i=1;i<(1<<k);i++){
int div=0;
long int t1=n;
for(j=0;j<k;j++){
if((1<<j)&i){
div++;
t1/=prime[j];
}
}
temp[div]+=t1;
}
long int ans=0;
for(i=0;i<=k;i++){
if(i%2==0) ans-=temp[i];
else ans+=temp[i];
}
cout<<ans<<endl;
}
