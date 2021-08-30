#include<bits/stdc++.h>
using namespace std;

int a[1000000];
void Nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
void Dao(int a[],int start,int end){
	while(start<end){
		swap(a[start],a[end]);
		start++;
		end--;
	}
}
void In(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void Rotation(int a[],int d,int n){
	if (d==0) return;
	Dao(a,0,d-1);
	Dao(a,d,n-1);
	Dao(a,0,n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		Nhap(a,n);
		Rotation(a,d,n);
		In(a,n);
	}
	return 0;
}
