#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
cin>>n;
set<int> s;
int temp;
for(i=0;i<n;i++){
cin>>temp;
s.insert(temp);
}
cout<<s.size()<<endl;
}
