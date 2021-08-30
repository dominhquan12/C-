#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

void xuly(int a[], int n) { 
	int dem=0;
    sort(a, a + n); 
    int d = a[n-1] - a[0]; 
    vector <int> v; 
    for (int i=1; i*i<=d; i++) { 
        if (d%i == 0) { 
            v.push_back(i); 
            if (i != d/i) 
                v.push_back(d/i); 
        } 
    } 
    for (int i=0; i<v.size(); i++) { 
        int temp = a[0]%v[i]; 
        int j; 
        for (j=1; j<n; j++) 
            if (a[j] % v[i] != temp) 
                break; 
        if (j == n) dem++;
             
    } 
    cout<<dem<<endl;
} 



int a[100000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		nhap(a,n);
		xuly(a,n);
	}
	return 0;
}
