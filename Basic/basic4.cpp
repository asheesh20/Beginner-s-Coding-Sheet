#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int divisor,dividend,quotient,remainder;
	cin>>divisor>>dividend;
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	cout<<"Quotient is : "<<quotient<<endl;
	cout<<"Remainder is : "<<remainder<<endl;
}
// Dividend=Quotient*Divisor+Remainder