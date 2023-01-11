#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d , p ,disp , petp;
        cin>>n>>p>>d>>petp>>disp;
        int ltrPetrol = n/petp;
        int costp = ltrPetrol*p;
        int ltrDis = n/disp;
        int costd = ltrDis *d;
        if(costp>costd){
            cout<<"DIESEL"<<endl;
        }else if(costp<costd){
            cout<<"PETROL"<<endl;
        }else{
            cout<<"ANY"<<endl;
        }
    }
    return 0;
}