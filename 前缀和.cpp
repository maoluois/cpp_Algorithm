#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
ll a[N];
ll sum[N];
int main() {
	int n, m;
	cin>>n>>m;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
		sum[i] = sum[i - 1] + a[i];
		
	}	

	for (int i = 1; i <= m; i ++){
		int x, y;
		cin>>x>>y;
		cout<<sum[y] - sum[x - 1]<<endl;

	}	
	
	
	return 0;
} 
