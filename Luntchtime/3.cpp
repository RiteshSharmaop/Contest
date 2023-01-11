#include<iostream>
using namespace std;
bool str(string a ,int n){

    int s = 0;
    int e = n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin >>k;
        string  a = "";
        char C;
        for (int i = 0; i < k; i++){
            cin >>C;
            a = a + C;
    }
        int n = a.size();
        if(str(a,n)==false){
            for(int i = 0 ; i<n-2 ; i++){
                swap(a[i],a[i+2]);
            }

            int x = 0;
            int z = n-1;
            int count = 0;
            while(x<=z){
                if(a[x]==a[z]){
                    count++;
                }
                x++;
                z--;
            }
            int op = n/2;
            if(count==op){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }else if(str(a,n)==true){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
        


    }
    return 0;
}