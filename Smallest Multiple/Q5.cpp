#include <iostream>
using namespace std;

const int limit=1000000000;

void solve(){
    int strt=21;
    int ans;
    for(int i=strt;i<=limit;i++){
        int count=0;
        for(int j=1;j<=20;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==20){
            ans=i;
            break;
        }
    }
    cout<<"Answer : "<<ans<<endl;
}

int main(){
    solve();
    return 0;
}