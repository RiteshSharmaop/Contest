#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        
        for(int i = 0 ; i < n-1 ; i++){
            if(i % 2 == 0){
                // Even
                if(arr[i] <= arr[i+1]){
                    continue;
                }else{
                    swap(arr[i],arr[i+1]);
                }
            }else {
                // odd
                if(arr[i] >= arr[i+1]){
                    continue;
                }else{
                    swap(arr[i],arr[i+1]);
                }
            }
        }
        // for(auto k : arr){
        //     cout<<k<<" ";
        // }
        for(int i = 0 ; i < n ; i++){
            cout<<arr[i]<<" ";
        }
        
    }
    return 0;
}