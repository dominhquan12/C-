#include<bits/stdc++.h>
using namespace std;

int comp(int const &i, int const &j) {
	return i > j;
}


void nhap(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

int max2(int a[],int n){
	int m=a[0];
	for(int i=1;i<n;i++)
		if(m<a[i]) m=a[i];
	int maxhai;
	for(int j=0;j<n;j++){
		if(a[j]!=m){
			maxhai=a[j];
			break;
		} 
	}
	for(int k=0;k<n;k++){
		if(a[k]!=m&&a[k]>maxhai) maxhai=a[k];
	}
	return maxhai;
}
int max(int a[],int n){
	int m=a[0];
	for(int i=1;i<n;i++)
		if(m<a[i]) m=a[i];
	return m;	
}

void in(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void xuly(int a[100][100],int m,int n){
	int b[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[i][j];	
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1&&a[i+1][j]==1) b[i+1][j]=b[i][j]+1;	
		}
	}
	int soLuongDong[m];
	for(int i=0;i<m;i++) soLuongDong[i]=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(b[i][j]!=0) soLuongDong[i]++;
		}
	}
	int maxS[m];
	for(int i=0;i<m;i++){
		if(max2(b[i],n)==0) maxS[i]=max(b[i],n);
		else maxS[i]=max2(b[i],n);
	}
	int ans=0;
	for(int i=0;i<m;i++){
		if(maxS[i]*soLuongDong[i]>ans) ans=maxS[i]*soLuongDong[i];
	}
	cout<<ans<<endl;
	
	
}

int a[100][100];

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		nhap(a,m,n);
		xuly(a,m,n);
	}
	return 0;
}
