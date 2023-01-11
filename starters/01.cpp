#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){;
        int n;
        cin>>n;
        int arr[n];
        int neg = 0;
        int pro = 1;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            if(arr[i]<0) neg++;
            pro *=arr[i];
        }
        if(pro < 0){
            if(neg >2){
                neg /= 2;
            }
            cout<<neg<<endl;
        }else{
            cout<<0<<endl;
        }
        
        
        
    }
    return 0;
}