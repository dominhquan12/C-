#include<bits/stdc++.h>
using namespace std;

int a[10000],b[10000];

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];	
}

int maxPathSum(int ar1[], int ar2[], int m, int n) { 
    int i = 0, j = 0; 
    int result = 0, sum1 = 0, sum2 = 0; 
    while (i < m && j < n) { 
        if (ar1[i] < ar2[j]) {
        	sum1 += ar1[i]; 
        	i++;
		}
            
        else if (ar1[i] > ar2[j]) {
        	sum2 += ar2[j]; 
        	j++;
		}
            
  
        else { 
            result += max(sum1, sum2); 
            sum1 = 0, sum2 = 0; 
            while (i < m && j < n && ar1[i] == ar2[j]) { 
                result = result + ar1[i]; 
                i++;
                j++; 
            } 
        } 
    } 
    while (i < m) {
        sum1 += ar1[i]; 
        i++;
    }
    while (j < n) {
        sum2 += ar2[j]; 
        j++;
    }
    result += max(sum1, sum2); 
    return result; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		nhap(a,n);
		nhap(b,m);
		cout<<maxPathSum(a,b,n,m)<<endl;
	}
	return 0;
}
