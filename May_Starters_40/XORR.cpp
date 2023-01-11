#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int brr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        cin>>brr[i];
	    }
	    int count =0;
	    for(int i=0;i<n;i++){
	        for(int j =1 ; j<n;j++){
	           if(arr[i]^arr[j]==brr[i]^brr[j]){
	               count++;
	            }
	        }
	    }
	    cout<<count/2-n<<endl;
	}
	return 0;
}
