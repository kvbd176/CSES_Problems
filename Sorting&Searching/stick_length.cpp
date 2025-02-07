#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i,avg;
cin>>n;
vector<long int> arr(n);
for(i=0;i<n;i++){ cin>>arr[i];}
sort(arr.begin(),arr.end());
if(n%2==0) avg=arr[n/2];
else avg=arr[(n-1)/2];
long int cost=0;
for(i=0;i<n;i++){
if(arr[i]==avg) continue;
else if(arr[i]<avg) cost+=(avg-arr[i]);
else cost+=(arr[i]-avg);
}
cout<<cost<<endl;
}
