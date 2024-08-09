#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int n;
bool flag = 1;
int p[N]; 
int a[N];
void print(){
	for (int i = 1; i <= n; i ++) {
		cout<<p[i]<<" ";
	}
}

void dfs(int x) {
	if (x == n) {
		print();
		flag = 0;
		return;
	}
	if (x == 1) {
		p[x + 1] = a[x] - p[x];
	}
	else {
		p[x + 1] = a[x] - p[x] - p[x - 1];
	}
	if (p[x + 1] == 0 || p[x + 1] == 1) {
		dfs(x + 1);
	}
} 
int main() {
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	} 
	p[1] = 0;
	dfs(1);
	if (flag) {
		memset(p, 0, sizeof(p));
		p[1];
		dfs(1);
	}
	return 0;
	
} 
