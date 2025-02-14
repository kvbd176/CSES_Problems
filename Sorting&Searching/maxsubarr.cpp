#include<bits/stdc++.h>
using namespace std;
 
long int maxsum(long int arr[],long int i,long int j){
if(i==j) return arr[i];
long int mid=(j+i)/2;
long int temp1=maxsum(arr,i,mid);
long int temp2=maxsum(arr,mid+1,j);
long int k;
long int sum=0,sum1=-9999,sum2=-9999;
for(k=mid;k>=i;k--){
sum+=arr[k];
if(sum>=sum1) sum1=sum;
}
sum=0;
for(k=mid+1;k<=j;k++){
sum+=arr[k];
if(sum>=sum2) sum2=sum;
}
sum=sum1+sum2;
sum=max(sum,temp1);
sum=max(sum,temp2);
return sum;
}
 
int main(){
long int n,i;
cin>>n;
long int arr[n];
for(i=0;i<n;i++) cin>>arr[i];
long int sum=maxsum(arr,0,n-1);
cout<<sum<<endl;
}
