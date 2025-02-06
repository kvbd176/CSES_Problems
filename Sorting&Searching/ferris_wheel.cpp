#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,i,j;
cin>>n>>x;
vector<int> v(n);
for(i=0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());
i=0;j=n-1;
int count=0;
while(i<=j){
if(i==j){count+=1;j--;}
else if(v[j]+v[i]<=x){
count+=1;
i++;
j--;
}
else{count+=1 ;j--;}
}
cout<<count<<endl;
}
