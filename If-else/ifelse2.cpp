#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	bool islower,isupper;
	char ch;
	cin>>ch;
	islower=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	isupper=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(!isalpha(ch)) cout<<"Not an Alphabet";
	else if(islower||isupper) cout<<"Vowel";
	else cout<<"Consonant";
}