#include<bits/stdc++.h>
using namespace std;
 
long long arr[1000100];
long long mod=1e9+7;
 
int main(){
int n;
cin>>n;
for(long long i=0;i<=n;i++){
if(i==0){
 arr[i]=1;
}
else{
for(int j=1;j<=6;j++){
if(j<=i) arr[i]+=arr[i-j];
}
arr[i]%=mod;
}
}
cout<<arr[n]<<endl;
return 0;
}
