#include <iostream>
using namespace std;

void solve(){
    int ans;
    for(int a=1;a<=1000;a++){
        for(int b=1;b<=1000;b++){
            for(int c=1;c<=1000;c++){
                if(((a*a)+(b*b))==(c*c)){
                    if(a+b+c==1000){
                        ans=a*b*c;
                        break;
                    }
                }
            }
        }
    }
    cout<<"Answer : "<<ans<<endl;
}

int main(){
    solve();
    return 0;
}