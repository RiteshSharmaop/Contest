#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string arr;
	    int one = 0 , zero = 0;
	    for(int i = 0 ; i < n ;i++){
	        cin>>arr[i];
	        
	        if(arr[i]=='0') zero++;
	        else one++;
	    }
	    
	        if(n == 2 && zero == one){
	            for(int i= 0 ; i < n ; i++){
                    cout <<arr[i];
	            }cout<<endl;
	        }else if(one == zero){
                while(zero--) cout<<0;
                while(one--) cout<<1;
                cout<<endl;
            }
            
            
            
            else if(one > zero){
	            while(one--){
                    cout<<1;
                }
                while(zero--){
                    cout<<0;
                }cout<<endl;
	        }else{
	            while(zero--){
                    cout<<0;
                }
                while(one--){
                    cout<<1;
                }cout<<endl;
	        }
	    
	}
	return 0;
}
