#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1;
        cin>>str2;
        if(str1[0]==str2[0] ||str1[0] == str2[1] && str1[0] != str1[1] || str2[0] != str2[1]) cout<<2<<endl;
        else if(str1[0] != str1[1] && str1[0] != str2[0]&&str1[0] != str2[1]){
            cout<<3<<endl;
        }else if(str1[0] == str1[1] && str1[0] != str2[0]&& str2[0] == str2[1]){
            cout<<1<<endl;
        }else if(str1[0] == str1[1] && str1[0] == str2[0]&& str1[0] == str2[1]){
            cout<<0<<endl;
        }else if(str1[0] == str1[1] && str1[0] != str2[0]&& str1[0] != str2[1] && str2[0] != str2[1]){
            cout<<2<<endl;
        }
        else {
            cout<<1<<endl;
        }

    }
    
    return 0;
}