#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c=0;
	cin>>a>>b;
	while(b!=0){
	c=a&b;
	a=a^b;
	b=c<<1;
}
cout<<a;
}
