#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = 0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i =0;i<n-1;i++){
	        if(arr[i]<=arr[i+1]){
	            count++;
	        }
	    }
	     if(count==n-1){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	}
	return 0;
}
