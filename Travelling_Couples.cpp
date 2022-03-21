#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int x,y,z;cin>>x>>y>>z;
	    int arr[3]={x,y,z};
        sort(arr, arr + n);
	    if(x<50 && y<50 && z<50) cout<<"NOTA"<<"\n";
	    else{
	        
	        cout<<arr[2]<<"\n";
	    }
	}
	return 0;
}
