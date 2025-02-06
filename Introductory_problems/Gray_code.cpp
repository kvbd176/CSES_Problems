#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i,j;
cin>>n;
vector<string> arr;
arr.push_back("0");
arr.push_back("1");
for(i=2;i<=n;i++){
int temp=arr.size();
for(j=temp-1;j>=0;j--) arr.push_back(arr[j]);
for(j=0;j<temp;j++) arr[j]="0"+arr[j]; 
for(j=temp;j<arr.size();j++) arr[j]="1"+arr[j];
}
for(i=0;i<pow(2,n);i++) cout<<arr[i]<<endl;
}
