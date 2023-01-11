#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}
bool solve(int n , string s , string arr[]){
    if(n == 1 ) {
            return true;
        }
    for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j< n ; j++){
                if(arr[i] == arr[j]) {
                    if(s[i] != s[j] ){
                        return false;
                    }      
                }
            }
        }
        return true;
}
int main() {
    init_code();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr[n];
        for(int i = 0 ; i < n ; i++){ 
            cin>>arr[i];
        }
        string s;
        cin>>s;
        
        
        
        if(solve(n,s,arr)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
