#include<bits/stdc++.h>
using namespace std;
int smaller(int arr[],string str,int n){
    int mini = 120;
    for(int i = 0 ; i< n ; i++){
            if(str[i] == '0'){
                mini = min(mini,arr[i]);
            }
    }
    return mini;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
       string str;
       cin>>str;
        
        cout<<smaller(arr,str,n)<<endl;; 
    
   }
    
    return 0;
}