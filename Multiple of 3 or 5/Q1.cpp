#include <iostream>
using namespace std;


void solve(int& sum){
    for(int i=1;i<1000;i++){
        if(i%3==0){
            sum+=i;
        }
        else if(i%5==0){
            sum+=i;
        }
    }
}

int main(){
    int sum=0;
    solve(sum);
    cout<<sum<<endl;
    return 0;
}