#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,C,D;
	cin>>T;
	while(T--){
	    cin>>A>>B>>C>>D;
	    C=C/A;
	    D=D/B;
	    C=C+D;
	    cout<<C<<endl;
	}
	return 0;
}
