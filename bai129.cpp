#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void sapXep(int a[100][100],int n){
	for(int i=0;i<n;i++){
		sort(a[i],a[i]+n);
	}
}

void xuLy(int a[100][100],int n){
	int luu[100];
	int k=0;
	sapXep(a,n);
	int b[n];
	for(int i=0;i<n;i++) b[i]=0;
	int f=0;
	for(b[0]=0;b[0]<n;b[0]++){
		int value=a[0][b[0]];
		bool check=true;
		for(int i=1;i<n;i++){
			while(b[i]<n&&a[i][b[i]]<=value) b[i]++;
			if(a[i][b[i]-1]!=value) check=false; 
        	if(b[i]==n){ 
            	f=1; 
           		break; 
        	} 
		}
		if(check){
			luu[k]=value;
			k++;
		} 
        if(f==1) break; 	
	}
	int dem=0;
	int kiemtra;
	for(int i=0;i<k;i++){
		kiemtra=0;
		for(int j=i;j>=0;j--){
			if(a[i]==a[j]) kiemtra++;
			
		}
		if(kiemtra==1) dem++;
	}
	cout<<dem<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[100][100];
		cin>>n;
		nhap(a,n);
		xuLy(a,n);
	}
	return 0;
}
