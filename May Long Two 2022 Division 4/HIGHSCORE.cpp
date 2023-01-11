#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n;
	    sum = 0;
	    int arr[4];
	    for(int i = 0; i<4;i++){
	        cin>>arr[i];
	    }
	    int maxi = INT_MIN;
	    for(int i = 0 ; i<4;i++){
	        if(arr[i]>maxi){
	            maxi = arr[i];
	        }
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
