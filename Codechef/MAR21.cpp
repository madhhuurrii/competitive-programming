#include <iostream>
using namespace std;

int main() {

	// your code goes here
	int N,H,x,T[100],flag=0;
	cin>>N>>H>>x;
	for(int i=0;i<N;i++){
	    cin>>T[i];
	    x=T[i]+x;
	    
	   if(x>=H){
	        flag++;
	        break;
	    }
	    else{
	        flag=0;
	    }
	    x=x-T[i];
	   
	}
       if (flag==1){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }   
	   
	
	
	return 0;
}