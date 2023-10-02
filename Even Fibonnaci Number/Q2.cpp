#include <iostream>
#include <vector>
using namespace std;

const int four_million=4000000;

void solve(){
    vector<int> dp(four_million,0);
    dp[0]=1;
    dp[1]=2;
    int sum=0;
    for(int i=2;i<four_million;i++){
        dp[i]=(dp[i-1]+dp[i-2]);
    }
    for(int i=0;i<four_million;i++){
        if(dp[i]>four_million){
            break;
        }
        else{
            if(dp[i]%2==0){
                sum+=dp[i];
            }
        }
    }
    cout<<"Sum of Even Valued Number : "<<sum<<endl;
}

int main(){
    solve();
    return 0;
}