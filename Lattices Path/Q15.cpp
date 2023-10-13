#include <iostream>
#define fr(i,n) for(int i=0;i<n;i++)
#define out(x) cout<<x<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const long long n=20;
using namespace std;


void solve(){
    long long dp[n+1];
    dp[0]=0;
    dp[1]=2;
    for(long long i=2;i<=n;i++){
        long long num=2*(2*i-1)*dp[i-1];
        long long deno=i;
        double val=(double)((double)num/(double)deno);
        dp[i]=(long long)(val);

    }
    for(int i=0;i<21;i++){
        cout<<i<<" "<<dp[i]<<endl;
    }
}

int main(){
    solve();
    return 0;
}