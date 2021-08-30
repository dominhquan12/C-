#include<bits/stdc++.h>
using namespace std;

#define NO_OF_CHARS 256

void xuly(string str) { 
    pair<int, int> arr[NO_OF_CHARS]; 
  
    for (int i = 0; str[i]; i++) { 
        (arr[str[i]].first)++; 
        arr[str[i]].second = i; 
    } 
  
    int res[NO_OF_CHARS]; 
    int k=0;
    for (int i = 0; i < NO_OF_CHARS; i++) {

  
        // If this character occurs only 
        // once and appears before the 
        // current result, then update the 
        // result 
        if (arr[i].first == 1) {
        	res[k]=arr[i].second;
        	k++;
		}
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<str.length();j++){
			if(j==res[i]) cout<<str[j];
		}
	}
             
  
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		xuly(s);
		cout<<endl;
	}
	return 0;
}
