#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ll long long
using namespace std;
int a[110];
int main() {
	int n;
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	}
	
	sort(a + 1, a + n + 1);
	reverse(a + 1, a + n + 1);
	for (int i = 1; i <= n; i ++) {
		cout<<a[i]<<" ";
	}

	return 0;
} 	

