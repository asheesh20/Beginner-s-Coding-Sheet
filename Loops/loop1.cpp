// Calculating Using Mathematical Formula 

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n;
	cin>>n;
	cout<<(n*(n+1))/2;
}


// Calculating Using Loop

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n,s(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		s+=i;
	}
	cout<<s;

}
