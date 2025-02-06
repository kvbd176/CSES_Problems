#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
vector<int> a(n);
vector<int> b(n);
for(i=0;i<n;i++) cin>>a[i]>>b[i];
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int max=0,count=0;
i=0;j=0;
while(i<n && j<n){
if(a[i]<b[j]){
count++;
if(max<count) max=count;
i++;}
else{
count--;
j++;
}
}
cout<<max<<endl;
}
