#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ll long long
using namespace std;
int a[110];
int main() {
	int n, x;
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	}
	for (int i = 2; i <= n; i ++) {
		int tmp = a[i];
		for (int j = 1; j < i; j ++) {
			if (a[i] < a[j]) {
				for (int k = i; k > j; k --) {
					a[k] = a[k - 1];
				}
				a[j] = tmp;
				break;
			}	
		}
	}
	
	for (int i = 1; i <= n; i ++) {
	 	cout<<a[i]<<" ";
	}
	return 0;
}
