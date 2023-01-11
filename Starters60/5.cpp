#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int one = 0 , zero = 0;
        for(int i = 0 ;  i < s.length() ; i++){
            if(s[i]=='1')one++;
            else zero++;
        }
        if(s.length() % 2 == 0){
            if(one % 2 == 0 && zero % 2 == 0){
                cout<<"Yes"<<endl;
            }else cout<<"No"<<endl;
        }else {
            if(one % 2 == 0 || zero % 2 == 0){
                cout<<"Yes"<<endl;
            }else cout<<"No"<<endl;
        }
        
        
        
    }
    return 0;
}