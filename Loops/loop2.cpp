#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
	int n,f(1);
	cin>>n;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	cout<<f;
}	