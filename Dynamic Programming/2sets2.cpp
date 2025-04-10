#include <iostream>
#include <vector>
using namespace std;
const int mod=1000000007;
const int inv2=500000004;
long long countpart(int n){
    long long temp=(long long)n*(n+1)/2;
    if(temp%2!=0) return 0;
    int i;
    long long j;
    long long target=temp/2;
    vector<long long> dp(target+1,0);
    dp[0]=1;
    for(i=1;i<=n;i++){
        for(j=target;j>=i;j--){
            dp[j]=(dp[j]+dp[j-i])%mod;
        }
    }
    return (dp[target]*inv2)%mod;
}
int main(){
    int n;
    cin>>n;
    cout<<countpart(n)<<endl;
    return 0;
}
