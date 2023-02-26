#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int b,e,ans=1;
	cin>>b>>e;
	for(int i=1;i<=e;i++){
		ans=ans*b;
	}
	cout<<ans;
}