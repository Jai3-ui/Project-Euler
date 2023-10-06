#include <iostream>
#include <string.h>
using namespace std;

const int n=2000000;
bool prime [n+1];

void solve(){
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++){
        if(prime[p]){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
    long long sum=0;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            sum+=i;
        }
    }
    cout<<"Answer : "<<sum<<endl;
}
int main(){
    solve();
    return 0;
}