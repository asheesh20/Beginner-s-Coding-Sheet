#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n,r,s(0);
	cin>>n;
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n/=10;
	}
	cout<<s;
}