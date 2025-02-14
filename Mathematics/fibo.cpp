#include<bits/stdc++.h>
using namespace std;
 
vector<vector<long int>> matrixmul(const vector<vector<long int>>& a,const vector<vector<long int>>& b){
vector<vector<long int>> res(2,vector<long int>(2,0));
int i,j,k;
long int mod=1000000007;
for(i=0;i<2;i++){
for(j=0;j<2;j++){
for(k=0;k<2;k++){
res[i][j]=(res[i][j]+(a[i][k]*b[k][j])%mod)%mod;
}
}
}
return res;
}
 
vector<vector<long int>> fibomat(const vector<vector<long int>>& a,long int n){
if(n==1) return a;
if(n==0) return {{1,0},{0,1}};
vector<vector<long int>> temp=fibomat(a,n/2);
temp=matrixmul(temp,temp);
if(n%2!=0) temp=matrixmul(temp,a);
return temp;
}
 
int main(){
long int n;
long int mod=10e9+7;
n=n%mod;
cin>>n;
if(n==0) cout<<0<<endl;
else{
vector<vector<long int>> a={{1,1},{1,0}};
vector<vector<long int>> res=fibomat(a,n);
cout<<(res[0][1]%mod)<<endl;
}
}
