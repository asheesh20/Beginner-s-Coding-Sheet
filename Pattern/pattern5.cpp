// Full Pyramid Star Pattern
// Pyramid Type 1

#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long
using namespace std;
int32_t main(){
	for(int i=1;i<=6;i++){
		for(int j=1;j<=11;j++){
			if(j>=7-i && j<=5+i){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		if(i<6) cout<<endl;
	}
}

// Pyramid Type 2

#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long
using namespace std;
int32_t main(){
	int k;
	for(int i=1;i<=6;i++){k=1;
		for(int j=1;j<=11;j++){
			if(j>=7-i && j<=5+i && k) {
				cout<<"*";
				k=0;
			}
			else {
				cout<<" ";
				k=1;
			}
		}
		if(i<6) cout<<endl;
	}
}
