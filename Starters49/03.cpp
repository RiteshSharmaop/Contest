#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        int c1 = 0 , c2 = 0;

        string str , rtr;
        cin>>str>>rtr;
        
        for(int i = 0 ; i < str.length();i++){
            if(str[i]=='1'){
                c1++;
            }
        }

        for(int i = 0 ; i < rtr.length();i++){
            if(rtr[i]=='1'){
                c2++;
            }
        }
        int diff = abs(c2 - c1);
        if(diff%2 ==0){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    
    }
    return 0;
}