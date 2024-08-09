#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans = 0;
	while(n){
		ans = ans * 10 + n % 10;
		n /= 10;
		
	}
	cout<<ans;
	return 0;
		
} 	
