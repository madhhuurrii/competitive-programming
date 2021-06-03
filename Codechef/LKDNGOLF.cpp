#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long long int N,x,k;
	    cin>>N>>x>>k;
	    int s=(N+1)%k;
	    if((x%k==0)||(x%k==s)){
	        cout<<"YES"<<"\n";
	    }
      
       else{
           cout<<"NO"<<"\n";
       }
	}
	return 0;
}