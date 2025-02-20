#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,k,i;
cin>>n>>k;
vector<long int> v(n);
long int maxi=-1;
for(i=0;i<n;i++){
cin>>v[i];
maxi=max(maxi,v[i]);
}
long int l=maxi,h=1e18;
long int maxval=1e18;
while(l<=h){
long int mid=(l+h)/2;
long int temp=1,sum=0;
for(i=0;i<n;i++){
if(sum+v[i]>mid){
sum=0;
temp++;
}
sum+=v[i];
}
if(temp>k) l=mid+1;
else{
if(mid<maxval) maxval=mid;
h=mid-1;
}
}
cout<<maxval<<endl;
}
