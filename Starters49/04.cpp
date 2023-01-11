#include<bits/stdc++.h>
using namespace std;
bool neww(int a,int b,int c){
    for(int i = 1 ; i <= 10 ; i++){
            for(int j = 1 ; j <= 10 ; j++){
                for(int k = 1 ; k <= 10 ; k++){
                    if(min(i,j)==a && min(j,k)==b && min(k,i)==c){
                        return true;
                    }
                }
            }
        }
        return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(neww(a,b,c)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}