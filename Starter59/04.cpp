#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int s = 0;
        int e = str.length()-1;
        string t = "";
        while(s<e){
            if(str[s]=='0') t+='0';
            else t+='1';
            if(str[e]=='0'){
                // 0
                if( t+'0' > '0'+t){
                    t+='0';
                }else t = '0'+t;
            }else {
                // 1
                if( t+'1' > '1'+t){
                    t+='1';
                }else t = '1'+t;
            }
            s++;
            e--;
        }
    cout<<t<<endl;
    
    }

    
    return 0;
}