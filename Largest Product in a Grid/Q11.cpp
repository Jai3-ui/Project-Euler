#include <iostream>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ot(r) cout<<r<<endl
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int grid=20;

void solve(){

    int arr[grid][grid];
    fr(i,grid){
        fr(j,grid){
            cin>>arr[i][j];
        }
    }
    long long max_prod=1;
    // Vertical Checking 
    fr(i,grid-3){
        fr(j,grid){
            long long prod=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            max_prod=max(prod,max_prod);
        }
    }
    // Horizontal Checking 
    fr(i,grid){
        fr(j,grid-3){
            long long prod=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            max_prod=max(prod,max_prod);
        }
    }

    // Diagonal ( Top-Left to Bottom-Right)
    fr(i,grid-3){
        fr(j,grid-3){
            long long prod=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
            max_prod=max(prod,max_prod);
        }
    }

    // Diagonal ( Top-Right to Bottom-Left)
    fr(i,grid-3){
        for(int j=3;j<grid;j++){
            long long prod=arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
            max_prod=max(max_prod,prod);
        }
    }

    cout<<"Maximum Product : "<<max_prod<<endl;
    
}

int main(){
    fast
    solve();
    return 0;
}
