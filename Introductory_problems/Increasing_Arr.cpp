#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
vector<long int>arr(n);
for(i=0;i<n;i++) cin>>arr[i];
long int count=0;
for(i=1;i<n;i++){
if(arr[i-1]>arr[i]){count+=(arr[i-1]-arr[i]); arr[i]=arr[i-1];}
}
cout<<count;
}
