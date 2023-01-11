#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int x,y,a,b;
	    cin >> x>>y;
	        a = x+y;
	        a = a*2;
	        a = 500-a;
	        b = y*4;
	        b =  1000-b;
	        int c = a+b;
	        
	        a = x*2;
	        y = x+y;
	        y = y*4;
	        b = y+a;
	        int d = 1500-b;
	        
	        if(d>=c){
	            cout<<d<<endl;
	        }else{
	            cout<<c<<endl;
	        }
	        
	       
	        

	   t--;
	}
	return 0;
}
