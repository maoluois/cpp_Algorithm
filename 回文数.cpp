#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int main(){
	int n;
	cin>>n;
	int x = n;
	int ans = 0;
	while(x){
		ans = ans * 10 + x % 10;
		x /= 10;
	}
	if (ans == n) cout<<"yes";
	else cout<<"no";
	
	return 0;
		
} 	
