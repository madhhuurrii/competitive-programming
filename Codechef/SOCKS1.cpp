#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A,B,C,D;
	cin>>A>>B>>C;
	D=A+B+C;
	if((3<D)&&(D<30)){
	  if((A==B)||(B==C)||(C==A)){
	      cout<<"Yes";
	  }  else {cout<<"No"; }
	}
	else{ cout<<"No"; }
	return 0;
}