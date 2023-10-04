#include <iostream>
#include <math.h>
using namespace std;
const int n=100;

void solve(){
    long long square_sum=0;
    for(int i=1;i<=n;i++){
        int sq_val=pow(i,2);
        square_sum+=sq_val;
    }
    long long sum_square=0;
    for(int i=1;i<=n;i++){
        sum_square+=i;
    }
    long long fin_val=pow(sum_square,2);
    cout<<"Answer : "<<abs(square_sum-fin_val)<<endl;
}

int main(){
    solve();
    return 0;
}