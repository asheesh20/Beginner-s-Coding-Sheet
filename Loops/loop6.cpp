// Method 1

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int a,b,c,ans;
	cin>>a>>b;
	c=min(a,b);
	for(int i=1;i<=c;i++){
		if(a%i==0 && b%i==0) ans=i;
	}
	cout<<ans;
}


// Method 2

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
	int a,b;
	cin>>a>>b;
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	cout<<a;
}