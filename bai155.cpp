#include<bits/stdc++.h>
using namespace std;

string sumBigNumber(string a,string b){
	if(b.length()>a.length())
		swap(b,a);
	string kq;
	string kq1;
	int i,nho=0,m=a.length(),n=b.length(),t;
	a="0"+a;
	for(i=0;i<m-n+1;i++) b="0"+b;
	for(i=m;i>=0;i--){
		t=(a[i]-'0')+(b[i]-'0')+nho;
		if(t>9){
			t=t-10;
			nho=1;
		}
		else{
			nho=0;
		}
		kq[i]=t+'0';
	}
	int index;
	if(kq[0]=='0') {
		for(int i=1;i<=m;i++){
			kq1+=kq[i];
		}
	}
	else {
		for(int i=0;i<=m;i++){
			kq1+=kq[i];
		}
	}
	return kq1;
}

bool checkSumStrUtil(string str, int beg, int len1, int len2) { 
    // Finding two substrings of given lengths 
    // and their sum 
    string s1 = str.substr(beg, len1); 
    string s2 = str.substr(beg + len1, len2); 
    string s3 = sumBigNumber(s1, s2); 
  
    int s3_len = s3.size(); 
    // if number of digits s3 is greater then 
    // the available string size 
    if (s3_len > str.size() - len1 - len2 - beg) 
        return false; 
  
    // we got s3 as next number in main string 
    if (s3 == str.substr(beg + len1 + len2, s3_len)) { 
  
        // if we reach at the end of the string 
        if (beg + len1 + len2 + s3_len == str.size()) 
            return true; 
  
        // otherwise call recursively for n2, s3 
        return checkSumStrUtil(str, beg + len1, len2, 
                                              s3_len); 
    } 
  
    // we do not get s3 in main string 
    return false; 
} 
  
// Returns true if str is sum string, else false. 
bool isSumStr(string str) { 
    int n = str.size(); 
  
    // choosing first two numbers and checking 
    // whether it is sum-string or not. 
    for (int i = 1; i < n; i++) 
        for (int j = 1; i + j < n; j++) 
            if (checkSumStrUtil(str, 0, i, j)) 
                return true; 
  
    return false; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(isSumStr(s)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;	
	}
	return 0;
}


