#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x=log2(n);
	int ans=(pow(2,x)/2)*x;
	int temp;
	for(int i=pow(2,x);i<=n;i++){
		temp=i;
		while(temp!=0){
			if(temp&1){
			ans++;
		}
			temp=temp>>1;
		}
	}
	cout<<ans;
}
