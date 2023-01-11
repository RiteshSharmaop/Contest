#include<bits/stdc++.h>
using namespace std;
int a(int arr[],int n){
    int ans = -1;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i] == arr[j]){
                ans = i+1;;
                i++;
            }
        }
    }
    return ans+1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[] = {1,1,1,1,1,1};
        int n = 6;

        cout<<a(arr,n);
    }
    return 0;
}