#include <iostream>
using namespace std;

int main() {
	int count;
	int arr[4];
	for(int i =0;i<4;i++){
	    cin>>arr[i];
	}
	count =0;
	for(int i =0;i<4;i++){
	    if(arr[i]>=10){
	        count++;
	    }
	}
	cout<<count<<endl;
	

	return 0;
}
