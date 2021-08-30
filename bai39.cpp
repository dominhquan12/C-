#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
string s1, s2;
void xuly() {
	int len1 = s1.size();
	int len2 = s2.size();
	vector<int> result(len1 + len2, 0);
	int tmp1 = 0;
	int sum;
	for (int i = len1-1; i >=0 ; i--) {
		int tmp2 = 0;
		int carry = 0;
		int m = s1[i] - '0';
		for (int j = len2-1; j>=0 ; j--) {
			int n = s2[j] - '0';
			sum = n * m + carry + result[tmp1 + tmp2];
			carry = sum / 10;
			result[tmp1 + tmp2] = sum % 10;
			tmp2++;
		}
		if (carry > 0) result[tmp1 + tmp2] += carry;
		tmp1++;
	}
	int i = result.size()-1; 
    while (i>=0 && result[i] == 0) 
    i--; 
    if(i<0){
    	cout<<0<<endl;
    	return;
	}
	for(int j=i;j>=0;j--) cout<<result[j];
	cout << endl;
}
int main() {
	int p;
	cin >> p;
	while (p--) {
		cin >> s1 >> s2;
		xuly();
	}
	return 0;
}
