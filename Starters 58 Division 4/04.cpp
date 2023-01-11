#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n ,bool flag , bool flag2){
    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool e = false;
        bool o = false;
        int odd = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        

            if(arr[i] % 2 == 1){
                odd++;
                e = true;
            }
            if(arr[i] % 2 == 0){
                o = true; 
            }
        }
        if(flag == true && flag2 == true){
            cout<<1<<endl;
        }else {
            cout<<0<<endl;
        }

        
        
        
    }
    return 0;
}