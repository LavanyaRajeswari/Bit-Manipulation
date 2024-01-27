#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>v,int index,int size,vector<int>ans){
	if(index >= size){
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	if(ans.size() == 0 || ans.back() < v[index]){
		ans.push_back(v[index]);
		fun(v,index+1,size,ans);
		ans.pop_back();
	}
	else if(ans.back() > v[index]){
		fun(v,index+1,size,ans);
		return;
	}
	fun(v,index+1,size,ans);	
}
int main(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int data;
		cin>>data;
		v.push_back(data);
	}
	fun(v,0,v.size(),{});
}
