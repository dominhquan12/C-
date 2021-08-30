#include<bits/stdc++.h>
using namespace std;

int mod(int a,int m){
    for (int x=0; x<m; x++) 
       	if ((a*x) % m == 1) 
          	return x;
	return -1; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m;
		cin>>a>>m;
		cout<<mod(a,m)<<endl;
	}
	return 0;
}
