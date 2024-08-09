#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 2e5 + 10;
ll a[N];
int n, k, x;
int main(){
	cin>>n>>k;
	ll sum = 0;
	for (int i = 1;i <= n; i ++) {
		cin>>x;
		sum += x;
		sum %= k;
		a[sum] ++;
	} 
	ll ans = 0;
	for (int i = 0; i < k; i ++) {
		ans += a[i] * (a[i] - 1) / 2;
	}
	cout<<ans + a[0];
	return 0; 
}
