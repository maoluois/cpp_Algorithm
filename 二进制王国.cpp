#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
string a[N];
bool cmp(string x, string y) {
	return x + y < y + x;
}

int main() {
	int n;
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i ++) {
		cout<<a[i];
	}
	return 0;
}
