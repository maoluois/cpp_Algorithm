#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int a[110];
int main() {
	int t;
	cin>>t;
	while (t --) {
		int n;
		cin>>n;
		for (int i = 1;i <= n; i ++) {
			cin>>a[i];
		}
		sort(a + 1, a + n + 1);
		if (a[1] == a[2] && a[n] == a[n - 1]) {
			cout<<0<<endl;
			
		}
		else if (a[1] == a[2] || a[n] == a[n - 1] || n == 2 || n > 2 && (a[2] == a[3] || a[n - 1] == a[n])) {
			cout<<1<<endl;
			 
			
		}
		else cout<<2<<endl;
	
	}
	return 0;
} 
