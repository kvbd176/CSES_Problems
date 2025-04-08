#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
vector<int> coins(n);
for(i=0;i<n;i++) cin>>coins[i];
int temp=0;
for(i=0;i<n;i++) temp+=coins[i];
vector<bool> possible(temp+1,false);
possible[0]=true;
for(i=0;i<n;i++){
for(j=temp;j>=coins[i];j--){
if(possible[j-coins[i]]) possible[j]=true;
}
}
vector<int> res;
for(i=1;i<=temp;i++){
if(possible[i]) res.push_back(i);
}
cout<<res.size()<<endl;
for(i=0;i<res.size();i++) cout<<res[i]<<" ";
cout<<endl;
}
