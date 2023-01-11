#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int ans = a - b;
    string an = to_string(ans);
    int i = 0;
    int size = an.length();
    if(size = 1){
        int k = stoi(an);
        cout<<k<<endl;
    }else{
        if(an[0] != 1){
            an[0] = '1';
        }else{
            an[0] = '2';
        }
    }
    cout<<an<<endl;
	return 0;
}
