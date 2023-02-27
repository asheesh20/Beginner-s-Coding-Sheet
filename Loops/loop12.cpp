#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n,m,r,s(0);
	cin>>n;
	m=n;
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n/=10;
	}
	if(s==m) cout<<"Palindrome";
	else cout<<"Not Palindrome";
}