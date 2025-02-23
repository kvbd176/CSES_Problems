#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i,j;
cin>>n;
vector<long int> x(n);
vector<long int> y(n);
for(i=0;i<n;i++){
cin>>x[i];
cin>>y[i];
}
j=n-1;
long int area=0;
for(i=0;i<n;i++){
area+=(x[j]+x[i])*(y[j]-y[i]);
j=i;
}
cout<<abs(area)<<endl;
}
