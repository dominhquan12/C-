#include<bits/stdc++.h>
using namespace std;

int a[10000000];


void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

int minSwap(int a[], int n, int k) {    
    int count = 0; 
    for (int i = 0; i < n; ++i) 
        if (a[i] <= k) 
            ++count;  
    int bad = 0; 
    for (int i = 0; i < count; ++i) 
        if (a[i] > k) 
            ++bad; 
    int ans = bad; 
    for (int i = 0, j = count; j < n; ++i, ++j) { 
        if (a[i] > k) 
            --bad; 
        if (a[j] > k) 
            ++bad; 
        ans = min(ans, bad); 
    } 
    return ans; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		nhap(a,n);
		cout<<minSwap(a,n,k)<<endl;
	}
	return 0;
}
