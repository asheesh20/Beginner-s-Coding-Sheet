#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n,s(0),r;
	cin>>n;
	while(n!=0){
		r=n%10;
		s+=r;
		n/=10;
	}
	cout<<s;
}