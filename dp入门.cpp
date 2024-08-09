#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 2e5 + 10;
int a[N], f[N], g[N];
int main() {
	int t;
	cin>>n>>x;
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	}
	f[1] = g[1] = a[1];
	for (int i = 2;i <= n + 1; i ++) {
		f[i] = max(f[i - 1], f[i - 2]) + a[i];
		g[i] = min(f[i - 1], f[i - 2]) + a[i];
	}
	if (x <= f[n + 1] && x >= g[n + 1]) {
		cout<<"Yes"<<endl;
		
	} 
	else {
		cout<<"No"<<endl;
	}
	return 0;
} 
