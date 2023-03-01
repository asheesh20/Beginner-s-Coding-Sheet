#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long
using namespace std;
int32_t main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		bool b=true;
		if(i==0 || i==1) b=false;
		for(int j=2;j<i;j++){
			if(i%j==0){
				b=false;
				break;
			}
		}
		if(b) cout<<i<<",";
	}
}