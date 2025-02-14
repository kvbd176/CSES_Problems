#include<bits/stdc++.h>
using namespace std;
int main(){
long int t,i,j;
cin>>t;
vector<int> temp(1000005,0);
for(i=1;i<1000005;i++){
for(j=i;j<1000005;j+=i){
temp[j]++;
}
} 
while(t>0){
long int n;
cin>>n;
cout<<temp[n]<<endl;
t--;
}
}
