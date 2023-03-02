#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	int n,m,original,c(0),s(0);
	cin>>n;
	m=n;
	original=n;
	while(m!=0){
		int r=m%10;
		c++;
		m/=10;
	}
	while(n!=0){
		int r=n%10;
		s=s+pow(r,c);
		n/=10;
	}
	if(original==s) cout<<"Armstrong Number";
	else cout<<"Not Armstrong Number";
}