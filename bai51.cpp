#include<bits/stdc++.h>
using namespace std;

long long a[10000000];

void nhap(long long a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
void in(long long a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==a[j]) {
					swap(a[i],a[j]);
					break;
				}	  
			}
			
		}
		for(int i=0;i<n;i++){
			if(a[i]!=i) a[i]=-1;
		}
		in(a,n);	
	}
	return 0;
}
