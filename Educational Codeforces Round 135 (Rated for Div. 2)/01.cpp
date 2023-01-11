#include<bits/stdc++.h>
using namespace std;
int solve(int arr[] , int n){
    bool flag = true;
    int maxi = -1;
    int index = -1;
    if(n == 1 ) return 1;
    else{
        for(int i = 0 ; i< n ;i++){
            if(arr[i] >= maxi){
                maxi = arr[i];
                index = i;
            }
        }
        for(int i = 0 ; i < n ;i++){
            if(arr[i] != arr[i+1]){
                flag = false;
            }
        }
        if(flag == false) {
            return index+1;
        }else{
            return n;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n] ;
        for(int i = 0 ; i< n;  i++){
            cin>>arr[i];
        }
        
        cout<<solve(arr,n)<<endl;
    }
    
    return 0;
}