#include<bits/stdc++.h> 
using namespace std; 
  

int longestSum(bool a[], bool b[], int n) { 
    int maxLen = 0; 
    for (int i=0; i<n; i++) { 
       	int sum1 = 0, sum2 = 0; 
       	for (int j=i; j<n; j++) { 
           	sum1 += a[j]; 
           	sum2 += b[j]; 
           	if (sum1 == sum2) { 
             	int len = j-i+1; 
             	if (len > maxLen) 
                	maxLen = len; 
           	} 
       } 
    } 
    return maxLen; 
} 

void nhap(bool a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		bool a[1000],b[1000];
		cin>>n;
		nhap(a,n);
		nhap(b,n);
		cout<<longestSum(a,b,n)<<endl;
	}
}
