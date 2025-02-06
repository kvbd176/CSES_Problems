#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,k,result;
cin>>n;
for(k=1;k<=n;k++){
result=((k*k)*((k*k)-1))/2;
result=result-(4*(k-1)*(k-2));
cout<<result<<endl;
}
}
