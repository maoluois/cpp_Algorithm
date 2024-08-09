#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ll long long
using namespace std;
int a[110];

// 奇数在前，偶数在后 
bool cmp(int x, int y) {
	if (x % 2 == 1 && y % 2 == 0) return 1;
	if (x % 2 == 0 && y % 2 == 1) return 0;
	if (x % 2 == 1 && y % 2 == 1) return x < y;
	if (x % 2 == 0 && y % 2 == 0) return x > y;
	
}
int main() {
	int n;
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	}
	
	sort(a + 1, a + n + 1, cmp);

	for (int i = 1; i <= n; i ++) {
		cout<<a[i]<<" ";
	}

	return 0;
} 	

