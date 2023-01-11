#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i = 0 ; i< n ; i++){
            cin>>arr[i];
        }
        int k;cin>>k;
        int brr[k];
        for(int i = 0 ; i<k;i++){
            cin>>brr[i];
        }
        vector<int> v;
        int count = 0;
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j<k ; j++){
                if(arr[i] == brr[j]) {
                    count++;
                    arr[i] = -1;
                }
            }
        }
        for(int i = 0 ; i< n ; i++){
            if(arr[i]>=0){
                v.push_back(arr[i]);
            }
        }
        for(auto j : v) cout<<j<<" ";
        cout<<endl;
        
    }
    
    return 0;
}