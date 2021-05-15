#include <iostream>
using namespace std;

int main() {
    // your code goes her
    int n,a[100],b=0;
    cin>>n;
    for(int i=1;i<n+1;i++){
        cin>>a[i];
        if(i!=a[i]){
            b=i;
            cout<<b;
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}
