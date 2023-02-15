#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int y;
	cin>>y;
	if(y%4==0){
		if(y%100==0){
			if(y%400==0) cout<<"Leap Year";
			else cout<<"Not Leap Year";
		}
		else cout<<"Leap Year";
	}
	else cout<<"Not Leap Year";
}