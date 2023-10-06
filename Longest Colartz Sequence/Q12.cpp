#include <iostream>
#include <vector>

using namespace std;
const long long million=1000000;
vector<long long> dp(million,0);

int chain_length(long long n){
    if(n==1){ return 1;}
    if(n<million && dp[n]!=0){return dp[n];}
    if(n%2==0){return 1+chain_length(n/2);}
    else{ return 1+chain_length(3*n+1);}
   
}

int main(){

    long long max_len=1;
    long long res=1;
    dp[0]=-1;
    dp[1]=1;
    for(long long i=2;i<million;i++){
        dp[i]=chain_length(i);
        if(dp[i]>max_len){
            max_len=max(max_len,dp[i]);
            res=i;
        }
        
    }
    cout<<"Answer : "<<res<<endl;
    return 0;
}