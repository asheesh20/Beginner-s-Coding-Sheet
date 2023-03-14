// Pascal's Triangle 

#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t factorial(int n){
	int f=1;
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int32_t combination(int num,int denom){
	return (factorial(num)/(factorial(denom)*factorial(num-denom)));
}
int32_t main(){
	int k,row,r;
	cin>>row;
	for(int i=1;i<=row;i++){k=1;r=0;
		for(int j=1;j<=2*row-1;j++){
			if(j>=row+1-i && j<=row-1+i && k){
				cout<<combination(i-1,r);
				k=0;r++;
			}
			else {
				cout<<" ";
				k=1;
			}
		}
		if(i<row) cout<<endl;
	}
}