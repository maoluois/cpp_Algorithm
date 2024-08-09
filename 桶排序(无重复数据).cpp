#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ll long long
using namespace std;
int a[110];
int main() {
	int n, x;
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>x;
		a[x] ++; 
	}
	for (int i = 1; i <= 100; i ++) {
		
		if (a[i]) {
			cout<<i<<" ";
		}
	}

	return 0;
}
