#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){ 
        int arr[3];
        for(int i = 0 ; i < 3 ; i++){
            cin>>arr[i];
        }
        int gt = 0;
        int one = 0, zero = 0;
        for(int i = 0 ; i< 3 ; i++){
            if(arr[i] == 1){
                one++;
            }
            if(arr[i] == 0) zero++;
            if( arr[i] >= 3 ) gt++; 
        }
        if(one == 1 && zero > one){
            
        }
    } 
    
    return 0;
}