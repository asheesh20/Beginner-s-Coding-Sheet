#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n,c,a=0,b=1;
	cin>>n;
	cout<<a<<",";
	c=a+b;
	while(c<n){
		cout<<c<<",";
		a=b;
		b=c;
		c=a+b;
	}
}