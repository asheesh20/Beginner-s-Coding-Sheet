// Method 1

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
	int a,b,c;
	cin>>a>>b;
	c=max(a,b);
	for(int i=c;i>0;i++){
		if(i%a==0 && i%b==0){
			cout<<i;
			break;
		}
	}
}


// Method 2

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
	cout<<a*b/ans;
}


// Method 3

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int a,b,c;
	cin>>a>>b;
	c=a*b;
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	cout<<c/a;
}