#include<bits/stdc++.h>

using namespace std;

string s[100005];

void nhap(string s[],int n){
	for(int i=0;i<n;i++)
		cin>>s[i];	
}
int myCompare(string X, string Y) { 
    string XY = X.append(Y); 
    string YX = Y.append(X); 
    return XY.compare(YX) > 0 ? 1: 0; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(s,n);
		vector<string> a;
		for(int i=0;i<n;i++){
			a.push_back(s[i]);
		}
		sort(a.begin(),a.end(),myCompare);
		for(int i=0;i<a.size();i++ ) 
        	cout<<a[i];
		cout<<endl; 	
	}
	return 0;
}
