#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i,sum=0;
cin>>n;
long int temp;
for(i=0;i<n-1;i++){
cin>>temp;
sum+=temp;
}
temp=(n*(n+1))/2;
cout<<temp-sum;
}
