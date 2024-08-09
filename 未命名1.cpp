#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
ll a[N];
ll d[N];
int main() {
	int n, m;
	cin>>n>>m;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
		d[i] = a[i] - a[i - 1];
	}
	
	int l, r, c;
	
	while (m --) {
		cin>>l>>r>>c; 
		d[l] += c;
		d[r + 1] -= c;
		
	}
	for (int i = 1;i <= n; i ++) {
		a[i] = a[i - 1] + d[i];
		cout<<a[i]<<" "; 
	}
	
	return 0;
} 
