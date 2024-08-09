#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 2e5 + 10;
ll a[N];
ll sum[N];
int main() {
	int n;
	cin>>n;
	ll mn = 0;
	ll ans = -INF;
	for (int i = 1; i <= n;i ++) {
		cin>>a[i];
		sum[i] = sum[i - 1] + a[i];
		ans = max(ans, sum[i]- mn);
		mn = min(mn, sum[i]);
	} 

	cout<<ans;
	return 0;
}
 
