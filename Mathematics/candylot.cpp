include <bits/stdc++.h>
using namespace std;
int main() {
int n,k,i;
cin>>n>>k;
double max=0.0;
for(i=1;i<=k;i++){
long double temp1=pow((long double)i/k,n);
long double temp2=pow((long double)(i-1)/k,n);
max+=i*(temp1-temp2);
}
cout<<fixed<<setprecision(6)<<max<<endl;
}
 
