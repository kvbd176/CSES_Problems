#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
cin>>n;
if(n==2 || n==3){
cout<<"NO SOLUTION";
return 0;
}
for(i=2;i<=n;i++){
if(i%2==0) cout<<i<<" ";
}
for(i=1;i<=n;i++){
if(i%2!=0) cout<<i<<" ";
}
return 0;
}
