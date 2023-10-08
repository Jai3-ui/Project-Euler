#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

void solve(){
    int k=13;
    char arr[1000]={'0'};
    for(int i=0;i<1000;i++){
        char ch;
        cin>>ch;
        arr[i]=ch;
    }
    long long max_product=1;
    for(int i=0;i<k;i++){
        max_product*=(int)(arr[i]-'0');
    }

    for(int i=0;i<1000-k;i++){
        
        int remove=(int)(arr[i]-'0');
        int add=(int)(arr[i+k]-'0');
        if(remove==0){
            long long product=1;
            for(int j=i+1;j<=i+k-1;j++){
                product*=(int )(arr[j]-'0');
            }
            product*=add;
            max_product=max(max_product,product);
        }
        else{
            long long product=1;
            for(int j=i+1;j<=i+k-1;j++){
                product*=(int)(arr[j]-'0');
            }
            product*=add;
            max_product=max(max_product,product);
        }
    }

    cout<<"Max Product "<<max_product<<endl;
    
}

int main(){
    solve();
    return 0;
}
