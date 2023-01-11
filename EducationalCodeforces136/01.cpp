#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){;
        int n,m;
        cin>>n>>m;
        int count = 0;
        bool flag = true;
        int a1,a2;
        a1 = 1;
        a2 = 1;
        if( n <= 2 && m <= 2  && n>=1 && m >= 1){
            cout<<n<<" "<<m<<endl; 
        }
        // }else if(n == 1 && m > 1 || n> 1 && m == 1){
        //     cout<<n<<" "<<m<<endl;
        // }
        else {
            for(int i = 1 ; i <= n ; i++){
                for(int j = 1 ; j <= m ; j++){
                    int a = i + 2;
                    int b = j + 2;
                    int c = i - 2;
                    int d = j - 2;
                    if(a <= n || b <= m ){
                        count++;

                    }else if(c >=1  || d >= 1 ){
                        count++;
                    }else {
                        flag = false;
                        cout<< i << " " << j<<endl;
                    }
                }
                    if(flag == false ) break;
            }
        }
        if(count > 0) cout<<1 <<" " <<1<<endl;
        
    }
    return 0;
}
gaygyagg    