#include<bits/stdc++.h>
using namespace std;
int main(){
long int n;
cin>>n;
long int i,l=1,r=n*n,ans=0,mid;
long int temp=(n*n+1)/2;
while(l<=r){
mid=l+(r-l)/2;
long int count=0;
for(i=1;i<=n;i++) count+=min(mid/i,n);
if(count>=temp){
ans=mid;
r=mid-1;
}
else l=mid+1;
}
cout<<ans<<endl;
}
