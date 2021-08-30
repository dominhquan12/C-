#include<bits/stdc++.h>
using namespace std;

void xuLy(string luuXau[],char s[]){
	int dem=0;
	char *p=strtok(s," ");
	while(p!=NULL){
		luuXau[dem]=p;
		dem++;
		p=strtok(NULL," ");	
	}
	for(int i=dem-1;i>=0;i--)
		cout<<luuXau[i]<<" ";
	cout<<endl;
		
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[1000];
		string luuXau[1000];
		cin.getline(s,1000);
		xuLy(luuXau,s);		
	}
	return 0;
}
