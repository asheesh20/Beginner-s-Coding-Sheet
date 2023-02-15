// Swapping Two Number Without using Third Variable

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int a,b;
	cin>>a>>b;
	cout<<"Two Numbers Before Swapping are : "<<a<<" "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"Two Numbers After Swapping are : "<<a<<" "<<b<<endl;
}


// Swapping Two Numbers Using Third Variable

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int a,b,c;
	cin>>a>>b;
	cout<<"Two Numbers Before Swapping are : "<<a<<" "<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"Two Numbers After Swapping are : "<<a<<" "<<b<<endl;
}


// Swapping Two Numbers Using XOR 

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int a,b;
	cin>>a>>b;
	cout<<"Two Numbers Before Swapping are : "<<a<<" "<<b<<endl;
	a^=b;
	b^=a;
	a^=b;
	cout<<"Two Numbers After Swapping are : "<<a<<" "<<b<<endl;
}