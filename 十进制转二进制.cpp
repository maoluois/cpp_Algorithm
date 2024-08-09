#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int main(){
	int n;
	cin>>n;
	string s = "";
	
	while(n){
		char x = n % 2 + '0';
		s = x + s;
		n /= 2;
	}
	cout<<s;
	
	return 0;
		
} 	
