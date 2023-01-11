#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string y = "y";
        string Y = "Y";
        string e = "e";
        string E = "E";
        string ss = "s";
        string S = "S";
        int i = 0;
        if(s[0]==y[0]||s[0]==Y[0]){
            i++;
        }
        if(s[1]==e[0]||s[1]==E[0]){
            i++;
        }
         if(s[2]==ss[0]||s[2]==S[0]){
            i++;
        }
        if(i==3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}