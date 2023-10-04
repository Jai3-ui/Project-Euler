#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

bool palindrome(string str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    if(rev==str){
        return true;
    }
    return false;
}

void solve(){
    int ans;
    for(int i=100;i<=999;i++){
        for(int j=100;j<=999;j++){
            int product=i*j;
            string s=to_string(product);
            if(palindrome(s)){
                ans=max(product,ans);
            }
        }
    }
    cout<<"Answer : "<<ans<<endl;

}

int main(){
    solve();
    return 0;
}