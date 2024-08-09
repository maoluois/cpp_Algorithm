#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
ll a[N];
ll d[N];
int main() {
	int n;
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
		d[i] = a[i] - a[i - 1];
	}
	int p = 0, q = 0;
	
	for (int i = 2; i <= n; i ++) {
		if (d[i] > 0) {
			p += d[i]; 
		}
		else {
			q -= d[i];
		}
	}	 
	
	cout<<max(p, q)<<endl;
	cout<<abs(p - q) + 1; 
	return 0;
} 
