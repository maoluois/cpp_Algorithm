#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
ll a[N];
ll b[N];
ll d[N];
int main() {
	int n;
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	} 
	for (int i = 1; i <= n; i ++) {
		cin>>b[i];
	} 
	
	int p = 0, q = 0;
	for (int i = 1; i <= n; i ++) {
		d[i] = (a[i] - b[i]) - (a[i - 1] - b[i - 1]); 
		
		if (d[i] >= 0) p += d[i];
		else q -= d[i]; 
	}
	
	cout<<max(p , q); 
	
	
	return 0;
}
