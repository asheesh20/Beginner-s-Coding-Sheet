#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	bool b=true;
	int n;
	cin>>n;
	if(n==0||n==1) b=false;
	for(int i=2;i<n;i++){
		if(n%i==0){
			b=false;
			break;
		}
	}
	if(b) cout<<"Prime Number";
	else cout<<"Not Prime Number";
}