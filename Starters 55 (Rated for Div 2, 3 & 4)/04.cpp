#include<bits/stdc++.h>
using namespace std;
bool f(int balls,int box){
    if(box >= 1){
        int sum = 0;
        for(int i = 0 ; i<= box ; i++){
            sum +=i;
        }
        if(balls >= sum){
            return true;
        }else return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int balls , box;
        cin>>balls>>box;
        if(f(balls,box)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}