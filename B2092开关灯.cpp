#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ll long long
using namespace std;
bool b[5010];
// 本题可以用纯模拟去解
// 此方法为观察出完全平方数的因数是奇数所以能解 
// 注意观察样例 
int main() {
	int n;
	cin>>n;
	for (int i = 1; i * i <= n; i ++) {
		cout<<i * i<<" ";
		
	}
	return 0;
}
