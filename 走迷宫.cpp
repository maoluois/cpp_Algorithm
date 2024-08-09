#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
char a[110][110];
bool v[110][110];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n, m;
int ans = INF; 
void dfs (int x , int y, int cnt) {
	if (x == n && y == m) {
		ans = min(ans, cnt);
		return;
	}
	for (int i = 0; i < 4; i ++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (a[nx][ny] == 'o' && !v[nx][ny]) {
		
			v[nx][ny] = 1;
			dfs(nx, ny, cnt + 1);
			v[nx][ny] = 0;
		}	
	}
}

int main() {
	
	cin>>n>>m;
	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= m; j ++) {
			cin>>a[i][j];
		}
	}
	dfs(1, 1, 0);
	cout<<ans<<endl;
	return 0;
} 
