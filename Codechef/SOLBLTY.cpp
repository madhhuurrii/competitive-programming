#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,A,B,C=0;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>X>>A>>B;
	    X=X*B;
	    B=B*100;
	    B=B-X;
	    
	     C= A+B;
	     C=C*10;
	    cout<<C<<endl;
	}
	return 0;
}