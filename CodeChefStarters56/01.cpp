#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[]){
    int count = 0;
     for(int i = 0 ; i < 4 ; i++){
        if(arr[i] == 0){
            count++;
        }
    }
    if(count == 4) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       int arr[4] ; 
       for(int i = 0 ; i < 4 ; i++){
        cin>>arr[i];
       }
      
      if(solve(arr)) cout<<"IN"<<endl;
      else cout<<"OUT"<<endl;

    }
    
    return 0;
}