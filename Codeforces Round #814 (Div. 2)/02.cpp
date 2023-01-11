#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b;
        
        c = a+b;
        if(c&1==1){
            cout<<"Burenka"<<endl;
        }else{
            cout<<"Tonya"<<endl;
        }
    }
    
    return 0;
}