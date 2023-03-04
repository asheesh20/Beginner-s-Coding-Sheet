#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
using namespace std;
int32_t main(){
	float a,b;
	char ch;
	cin>>a>>b;
	cin>>ch;
	switch(ch){
	case '+': cout<<a+b;
	          break;
	case '-': cout<<a-b;
		      break;
    case '/': cout<<a/b;
    	      break;
    case '*': cout<<a*b;
    	      break;
    default : cout<<"Wrong Choice";
	}
}
