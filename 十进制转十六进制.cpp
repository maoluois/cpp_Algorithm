#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int main(){
	int n;
	cin>>n;
	string s = "";
	
	while(n){
		char x;
		if (n % 16 < 10) x = n % 16 + '0';
		else x = n % 16 - 10 + 'A';
		
		s = x + s;
		n /= 16;
	}
	cout<<s;
	
	return 0;
		
} 	
