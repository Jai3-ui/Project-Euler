#include <iostream>
#include <string.h>
using namespace std;

const int n=1000000;
bool prime[n+1];

void solve(){
     memset(prime,true,sizeof(prime));
     for(int p=2;p*p<=n;p++){
        if(prime[p]){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
     }
     int count=0;
     int prim;
     for(int i=2;i<=n;i++){
        if(prime[i]){
            count++;
        }
        if(count==10001){
            prim=i;
            break;
        }
     }
     cout<<"Answer : "<<prim<<endl;

}

int main(){
    solve();
    return 0;
}