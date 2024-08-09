#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
ll a[110];
int cnt = 0; 
ll f (int n) {
	cnt ++;
	if (n == 1 || n == 2) {
		return a[n] = 1;
	}
	if (a[n]) {
		return a[n];
	}
	return a[n] = f(n - 1) + f(n - 2);
} 
int main() {
	int n;
	cin>>n;
	cout<<f(n)<<endl;
	cout<<cnt<<endl; 
	return 0;
} 
