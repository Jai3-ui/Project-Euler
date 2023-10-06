#include <iostream>
#include <math.h>
using namespace std;

const int n=1000000;

void solve(){
    int ans;
    for(int i=9578;i<=n;i++){
        long long number=((i)*(i+1))/2;
        int divisor=0;
        for(int i=1;i<=sqrt(number);i++){
            if(number%i==0){
                if(n/i==i){
                    divisor+=1;
                }
                else{
                    divisor+=2;
                }
            }
        }
        if(divisor>500){
            ans=number;
            break;
        }
    }
    cout<<"Answer : "<<ans<<endl; 
}

int main(){
    solve();
    return 0;
}