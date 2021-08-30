#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=1;i<=n;i++)
		cin>>a[i];
}
void tao(int a[],int n){
	for(int i=1;i<=n;i++)
		a[i]=1;
}
void in(int a[],int n){
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int a[105],b[105],c[105],n;
		cin>>n;
		nhap(a,n);
		tao(b,n);
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[j]>a[i] && b[j]<b[i]+1) b[j]=b[i]+1;
			}	
		}
		tao(c,n);
		for(int i=n;i>1;i--){
			for(int j=i-1;j>0;j--){
				if(a[j]>a[i] && c[j]<c[i]+1) c[j]=c[i]+1;
			}
		}
		int max=b[1]+c[1]-1;
		for(int i=2;i<=n;i++){
			if(max<b[i]+c[i]-1) max=b[i]+c[i]-1;
		}
		cout<<max<<endl;
	}
	return 0;
}
