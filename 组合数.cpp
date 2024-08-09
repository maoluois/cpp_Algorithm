#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int a[110];
int p[110];
int vst[110];
int cnt = 0;
int n, k;
void print() {
	for (int i = 1; i <= k; i ++) {
		cout<<p[i]<<" ";
	} 
	cout<<endl;
}

void dfs(int x, int start) {
	if (x > k) {
		print();
		cnt ++;
		return;
	}
	
	for (int i = start; i <= n; i ++) {
		p[x] = a[i];
		dfs(x + 1, i + 1); 
		}
		
}

int main() {
	cin>>n>>k;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	}
	dfs(1, 1);
	return 0;
}
