#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>> adj;
vector<int> sub; 
 
int dfs(int node){
int count=0;
for(auto it:adj[node]) count+=1+dfs(it);
sub[node]=count;
return count;
}
 
int main(){
int n,i;
cin>>n;
adj.resize(n+1);
sub.resize(n+1,0);
for(i=2;i<=n;i++){
int temp;
cin>>temp;
adj[temp].push_back(i);
}
dfs(1);
for(i=1;i<=n;i++) cout<<sub[i]<<" ";
cout<<endl;
}
