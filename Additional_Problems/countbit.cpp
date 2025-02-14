#include <iostream>
using namespace std;
 
int main() {
long int n,count=0,i,j,temp,temp1,remi;
cin>>n;
for(i=0;i<60;i++){
temp=1;
for(j=0;j<i;j++) temp*=2;
temp1=(n+1)/(2*temp);
count+=temp1*temp;
remi=(n+1)%(2*temp);
if(remi>temp) count+=remi-temp;
}
cout<<count<<endl;
}
