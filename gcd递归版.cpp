#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
ll a[110]; 
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	
	return gcd(b, a % b);
} 
int main(){
	int a, b;
	cin>>a>>b;
	cout<<gcd(a, b);
	return 0;
}
