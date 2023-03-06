// Hollow Rectangular Star

#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=5;j++){
			if(i==1||i==3||j==1||j==5) cout<<"*";
			else cout<<" ";
		}
		if(i<3) cout<<endl;
	}
}