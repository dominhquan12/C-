#include<bits/stdc++.h>
using namespace std;

int largestPower(int n, int p) { 
    int x = 0; 
    while (n) { 
        n /= p; 
        x += n; 
    } 
    return x; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		cout<<largestPower(n,p)<<endl;
	}
	
	return 0;
}
