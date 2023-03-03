#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	int n;
	cin>>n;
	cout<<"Factors of "<<n<<" are : "<<endl;
	for(int i=1;i<=n;i++){
		if(n%i==0) cout<<i<<" ";
	}
}