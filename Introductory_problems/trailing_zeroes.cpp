#include<bits/stdc++.h>
using namespace std;
 
int main() {
long int n;
cin>>n;
long int temp=0;
for(long int i=5;n/i>=1;i*=5){
temp+=n/i;
}
cout<<temp<<endl;
}
