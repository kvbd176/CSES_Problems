#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,t,i,res;
cin>>n>>t;
long int l=1,h,mid;
vector<long int> v(n);
for(i=0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());
h=t*v[0];
while(l<=h){
mid=l+(h-l)/2;
long int sum=0,flag=0;
for(i=0;i<n;i++){
sum+=(mid/v[i]);
if(sum>=t) flag=1;
}
if(flag==1){
res=mid;
h=mid-1;
}
else l=mid+1;
}
cout<<res<<endl;
}
