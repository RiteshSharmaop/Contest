#include<bits/stdc++.h>
using namespace std;
bool solve(int a, int b, int x ){
    if(a==b) return true;
    else if(a < b){
        while(a<b){
            a = a+x;
            b = b-x;
        }
    }else{
        while(a>b){
            a = a-x;
            b = b+x;
        }
    }
    if(a==b) return true;
        else return false;
}

bool solvee(int a,int b,int x , bool flag){
    if(a==b){
        return true;
    }
    if((a>b || a<b) && flag == false ) return false;
    if(a<b){
        flag =false;
        a = a+x;
        b = b-x;
        return solvee(a,b,x , flag);
    }else {
        a = a-x;
        b = b+x;
        return solvee(a,b,x , flag);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){;
        int a,b,x;
        cin>>a>>b>>x;
        bool flag = true;
        cout<< "Recursion : "<<endl;
        if(solvee(a,b,x,flag))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        cout<< "Loops :"<<endl;
        if(solve(a,b,x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}