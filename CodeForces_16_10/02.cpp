#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

int main() {
    init_code();
    int t;
    cin>>t;
    while(t--){
        long long int n,q;
        cin>>n>>q;
        long long int arr[n];
        long long int sum = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        while(q--){
            long long int num , x;
            cin>>num>>x;
            
            for(int i = 0 ; i < n ; i++){
                if(arr[i] % 2 == 0 ){
                    // eve
                    if(num == 0){
                        sum += x;
                        arr[i] += x;
                    }
                }else{
                    if(num == 1){
                        sum += x;
                        arr[i] += x;
                    }
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
