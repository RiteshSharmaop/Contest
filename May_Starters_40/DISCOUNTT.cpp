#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int sum=0;
	    int dum =0;
	    int arr[n];
	    for(int i =0;i<n;i++){
	        cin>>arr[i];
	        sum = sum+arr[i];
	        if(arr[i]<=y){
	            dum = dum + 0;
	        }else{
	            arr[i] = arr[i]-y;
	            dum = dum+arr[i];
	        }
	        
	    }

	    if(dum+x < sum){
	        cout<<"COUPON"<<endl;
	    }else{
	        cout<<"NO COUPON"<<endl;
	    }
	    
	}
	return 0;
}
