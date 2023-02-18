#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n;
	cin>>n;
	for(int i=1;i<=10;i++){
		cout<<n<<" * "<<i<<" = "<<n*i;
		if(i<10) cout<<endl;
	}
}