#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
vector<long int> book(n);
long int min=0;
for(i=0;i<n;i++){ 
cin>>book[i]; 
min+=book[i];}
long int temp=*max_element(book.begin(),book.end());
cout<<max(min,temp*2)<<endl;;
}
