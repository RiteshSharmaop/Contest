#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int nnn = n;
        if(n==k ){
            cout<<1<<endl;
        }else if(k == 1) cout<< n * n<<endl;
        else{
            int nn = n;
            int kk = k;
            int count = 0;
            while(kk<nn){
                count++;
                nn -= kk;
            }
            int leftsize = nn*nn;
            int ls = nn*n;
            ls *= 2;
            ls -= nn*nn;
            int ans = nnn*nnn - ls;
            cout<<ans/(k*k)<<endl;
        }
    }
    return 0;
}