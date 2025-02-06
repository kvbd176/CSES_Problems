#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
long int sum=(n*(n+1))/2;
if(sum%2!=0){
cout<<"NO";
return 0;
}
cout<<"YES"<<endl;
vector<long int> set1,set2;
sum/=2;
for(i=n;i>0;i--){
if(sum-i>=0){
set1.push_back(i);
sum-=i;
}
else set2.push_back(i);
}
cout<<set1.size()<<endl;
for(long int i: set1) cout<<i<<" ";
cout<<endl;
cout<<set2.size()<<endl;
for(long int i: set2) cout<<i<<" ";
cout<<endl;
}
