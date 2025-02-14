#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
long int x1,x2,x3,y1,y2,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
long int temp=(y2-y1)*(x3-x1)-(y3-y1)*(x2-x1);
if(temp==0) cout<<"TOUCH"<<endl;
else if(temp<0) cout<<"LEFT"<<endl;
else cout<<"RIGHT"<<endl;
t--;
}
}
