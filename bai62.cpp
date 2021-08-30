#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
	int T;
	cin>>T;
	while(T--){
		int n;
		ll s;
		cin>>n;
		int a[n]={0};
		ll maxx=0;
		for(int i = 0; i < n; i++)
            cin>>a[i];
		maxx = a[0];
		for(int i = 0; i < n; i++){
			if(i == n-1){
				if(maxx < a[i]) maxx = a[i];
				break;
			}
			s=a[i];
			for(int j = i+1; j < n; j++){
				s*=a[j];
				if(maxx < s) maxx=s;
			}
		}
		cout<<maxx<<endl;
	}
	return 0;
}

