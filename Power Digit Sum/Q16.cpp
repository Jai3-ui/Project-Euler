#include <iostream>
#include <vector>
#define fr(i,n) for(int i=0;i<n;i++)
#define out(x) cout<<x<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int a[400]={0};
    a[0]=1;
    int carry=0;
    for(int i=1;i<=1000;i++){
        for(int i=0;i<400;i++){
            int temp=2*a[i]+carry;
            a[i]=temp%10;
            carry=temp/10;
        }
    }
    int sum=0;
    for(int i=0;i<400;i++){
        sum+=a[i];
    }
    cout<<"Answer : "<<sum<<endl;

}

int main(){
    solve();
    return 0;
}