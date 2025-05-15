#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long x,y,val;
cin>>y>>x;
long long n=max(x,y);
if(n%2==0){
if(y==n) val=n*n-x+1;
else val=(n-1)*(n-1)+y;
}
else{
if(y==n) val=(n-1)*(n-1)+x;
else val=n*n-y+1;
}
cout<<val<<endl;
}
}
