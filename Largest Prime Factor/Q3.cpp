#include <iostream>
#include <bits\stdc++.h>
using namespace std;

const int limit=10000000;
bool prime[limit+1];

void sieve_of_erosthenes(){
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=limit;p++){
        if(prime[p]){
            for(int i=p*p;i<=limit;i+=p){
                prime[i]=false;
            }
        }
    }
}


int main(){
    int ans;
    sieve_of_erosthenes();
    long long val=600851475143;
    for(int i=2;i<limit;i++){
        if(prime[i]){
            if(val%i==0){
                ans=i;
            }
        }
    }
    cout<<"Largest Prime Factor : "<<ans<<endl;
    return 0;
}