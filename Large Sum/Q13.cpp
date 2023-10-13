#include <iostream>
#include <vector>
#include <algorithm>
#define fr(i,n) for(int i=0;i<n;i++)
#define out(x) cout<<x<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int row=100;
const int col=50;

void solve(){
    char arr[row][col];
    fr(i,row){
        fr(j,col){
            cin>>arr[i][j];
        }
    }

    vector<int> res;
    int carry=0;
    fr(i,col){
        int sum=0;
        fr(j,row){
            int val=(int)(arr[j][col-i-1]-'0');
            sum+=val;
        }
        if(i==(col-1)){
            res.push_back(sum+carry);
        }
        else{
            sum+=carry;
            int placeVal;
            if(sum%10==0){
                placeVal=0;
            }
            else{
                placeVal=sum%10;
            }
            res.push_back(placeVal);
            carry=sum/10;
        }
    }

    reverse(res.begin(),res.end());

    for(auto& i:res){
        cout<<i;
    }
    cout<<endl;

}

int main(){
    solve();
    return 0;
}