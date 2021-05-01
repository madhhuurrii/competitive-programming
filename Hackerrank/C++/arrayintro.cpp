#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,A[1000];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    for(int i=n;i>0;i--){
        cout<<A[i]<<" ";
    }
    return 0;
}
