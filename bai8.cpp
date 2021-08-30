#include<bits/stdc++.h>
using namespace std;
 
bool nt(long long n){
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++) 
        if(n%i==0) return false;
    return true;
}
 
int main () {
	int t;
	cin>>t;
	while(t--){
		long long n;
    	cin>>n;
    	for(long long i=2;i<=sqrt(n);i++){
       	 	if(n%i==0){
           	 	if(nt(i)){
            		while(n%i==0){
            			cout<<i<<" ";
                	    n=n/i;			
               		 }
            	}
       		 }
   		 }
    	if(n!=1 && nt(n)) cout<<n<<" ";
    	cout<<endl;
	}
    return 0;
}
