#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int c,n,a=0,b=1;
	cin>>n;
	cout<<a<<","<<b<<",";
	for(int i=1;i<=n-2;i++){
		c=a+b;
		cout<<c;
		if(i<n-2) cout<<",";
		a=b;b=c;
	}
}