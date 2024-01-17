//Time complexity - O(n*2^n) using bit operations
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
}
int x=pow(2,n);
for(int i=0;i<x;i++){
	int temp=i,j=0;
	int a=pow(2,n-1);
	while(a!=0){
		if(a&temp){
			cout<<arr[j]<<" ";
		} 
		a=a>>1;
		j++;
	}
	cout<<endl;
}
}
