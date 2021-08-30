#include<bits/stdc++.h>
using namespace std;

int a[1000000],b[1000000],c[1000000],d[1000000];

void in(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void tao(int a[],int n){
	for(int i=0;i<n;i++)
		a[i]=0;
}

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		nhap(a,m);
		nhap(b,n);
		tao(c,m);
		tao(d,m);
		int k=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(b[i]==a[j]){
					c[j]=1;
					d[k]=a[j];
					k++;	
				}
				
			}
		}
		int index;
		for(int i=0;i<m;i++){
			if(d[i]==0) {
				index=i;
				break;	
			}
		}
		int h=index;
		for(int i=0;i<m;i++){
			if(c[i]==0) {
				d[h]=a[i];
				h++;	
			}	
		}
		sort(d+index,d+m);
		in(d,m);
	}
	return 0;	
}

