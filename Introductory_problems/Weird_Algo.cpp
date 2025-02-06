#include<bits/stdc++.h>
using namespace std;

void weirdalgo(long int n){
if(n==1)cout<<1;
else if(n%2==0){ cout<<n<<" "; weirdalgo(n/2);}
else{ cout<<n<<" "; weirdalgo((n*3)+1);}
}
int main(){
long int n;
cin>>n;
weirdalgo(n);
}
