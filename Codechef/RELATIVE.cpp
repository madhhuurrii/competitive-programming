#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,g;
	long long int c;
    cin>>T;
    while(T--){
        cin>>g>>c;
        c=c*c;
        g=2*g;
        c=c/g;
        cout<<c<<endl;
    }
	return 0;
}