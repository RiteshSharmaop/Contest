#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}
#define ll long long int
int main() {
    init_code();
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n+10];
        for(int i = 1 ; i <= n ; i++){
            cin>>arr[i];
        }
        while(q--){
            int k,l1,r1,l2,r2;
            cin>>k>>l1>>r1>>l2>>r2;        
            int count = 0;        
            for(int i = l1 ; i <= r1 ; i++){
                for(int j = l2 ; j <= r2 ; j++){
                    int ne = arr[i] ^ arr[j];
                    int mask = 1<<k;                
                    if((ne & mask) > 0 ){
                        count++;
                    }
                }  
            }
            cout<<count<<endl;
        }
    }

    return 0;
}



// 




