#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

int a[1000000],b[1000000];

int findCrossOver(int arr[], int low, int high, int x) { 
  	// Base cases 
  	if (arr[high] <= x) // x is greater than all 
    	return high; 
  	if (arr[low] > x)  // x is smaller than all 
    	return low; 
  
 	// Find the middle point 
  	int mid = (low + high)/2;  /* low + (high - low)/2 */
  
 	/* If x is same as middle element, then return mid */
 	if (arr[mid] <= x && arr[mid+1] > x) 
   		return mid; 
  
  	/* If x is greater than arr[mid], then either arr[mid + 1] 
    is ceiling of x or ceiling lies in arr[mid+1...high] */
  	if(arr[mid] < x) 
      	return findCrossOver(arr, mid+1, high, x); 
  
  	return findCrossOver(arr, low, mid - 1, x); 
} 
  
// This function prints k closest elements to x in arr[]. 
// n is the number of elements in arr[] 
void printKclosest(int arr[], int x, int k, int n) { 
    // Find the crossover point 
    int m=0;
    int l = findCrossOver(arr, 0, n-1, x); 
    int r = l+1;   // Right index to search 
    int count = 0; // To keep track of count of elements already printed 
  
    // If x is present in arr[], then reduce left index 
    // Assumption: all elements in arr[] are distinct 
    if (arr[l] == x) l--; 
  
    // Compare elements on left and right of crossover 
    // point to find the k closest elements 
    while (l >= 0 && r < n && count < k) { 
        if (x - arr[l] < arr[r] - x) 
            b[m]=arr[l--]; 
        else
            b[m]=arr[r++]; 
        count++; 
        m++;
    } 
  
    // If there are no more elements on right side, then 
    // print left elements 
    while (count < k && l >= 0){
    	b[m]=arr[l--];
		count++; 
		m++;
	}   
    // If there are no more elements on left side, then 
    // print right elements 
    while (count < k && r < n){
        b[m]=arr[r++];
		count++; 
		m++;
	}
	sort(b,b+m);
	in(b,m);
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,x;
		cin>>n;
		nhap(a,n);
		cin>>k>>x;
		printKclosest(a,x,k,n);
		cout<<endl;
	}
	return 0;
}
