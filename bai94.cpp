#include <bits/stdc++.h> 
using namespace std; 
  
void alternateSort(int a[],int n) { 
    sort(a,a+n); 
    int i=0, j=n-1; 
    while (i<j) { 
        cout<<a[j--] <<" "; 
        cout<<a[i++] <<" "; 
    } 
    if (n%2!=0) 
        cout<<a[i]; 
    cout<<endl;
}

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000],n;
		cin>>n;
		nhap(a,n);
		alternateSort(a,n);
	}
	return 0;
} 
