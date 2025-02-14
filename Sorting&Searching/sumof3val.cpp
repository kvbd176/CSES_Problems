#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x,i;
cin>>n>>x;
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++){
cin>>v[i].first;
v[i].second=i+1;
}    
sort(v.begin(),v.end());
for(i=0;i<n-2;i++){
int temp=x-v[i].first;
int l=i+1;
int r=n-1;        
while(l<r){
int sum=v[l].first+v[r].first;
if(sum==temp){
cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<< endl;
return 0;
} 
else if(sum<temp) l++;
else r--;
}
}
cout<<"IMPOSSIBLE"<<endl;
return 0;
}
