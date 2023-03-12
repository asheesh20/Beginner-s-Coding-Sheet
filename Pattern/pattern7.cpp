// Hollow Full Pyramid Star

#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=11;j++){
			if(j==7-i || j==5+i) cout<<"*";
			else cout<<" ";
		}
		if(i<=5) cout<<endl;
	}
	for(int i=1;i<=11;i++){
		cout<<"*";
	}
}