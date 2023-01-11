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
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i = 0 ;i < n ; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int count = 0;
        int i = 0;
        int j = 1;
        int sum = 0;
        while(j<n || i< n){
            if(arr[i]==arr[j]) {
                sum = 1;
                break;
            }
            else sum = 0;
            i++;
            j++;
        }
        if(sum == 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}