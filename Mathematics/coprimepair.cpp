#include<bits/stdc++.h>
using namespace std;
int maxi=1e6+1;
 
int main(){
int n,i,j;
cin>>n;
vector<int> a(n);
vector<int> freq(maxi,0); 
for(i=0;i<n;i++){
cin>>a[i];
freq[a[i]]++;
}
vector<long long> cnt(maxi,0);
for(i=1;i<maxi;i++){
for(j=i;j<maxi;j+=i){
cnt[i]+=freq[j];
}
}
vector<long long> ans(maxi,0);
for(i=maxi-1;i>=1;i--){
long long temp=cnt[i]*(cnt[i]-1)/2; 
for(j=2*i;j<maxi;j+=i){
temp-=ans[j]; 
}
ans[i]=temp;
}
cout<<ans[1]<<endl; 
}
