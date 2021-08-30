#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,a,b;
		cin>>m>>n>>a>>b;
		int d=0;
		for(int i=m;i<=n;i++){
			if(i%a==0||i%b==0) d++;
		}
		cout<<d<<endl;
	}
	return 0;
}
