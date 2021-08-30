#include<bits/stdc++.h> 
using namespace std;

long long b[10000000],c[10000000];
string a[10000000];
void nhap(string a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void in(long long a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

void xuly(string a[],int n){
	int m=0;
	for(int i=0;i<n;i++){
		m+=a[i].length();
	}
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i].length();j++){
			b[k]=a[i][j]-'0';
			k++;
		}
	}
	sort(b,b+m);
	int h=0;
	for(int i=0;i<m;i++){
		c[h]=b[i];
		while(b[i]==b[i+1]){
			i++;
		}
		h++;
	}
	in(c,h);
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		xuly(a,n);
	}
	
	return 0;
}
