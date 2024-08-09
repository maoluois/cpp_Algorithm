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

struct Node {
	int x, y, step; 
};
void bfs(int x, int y) {
	queue<Node> q;
	Node node = {x, y, 0};
	q.push(node);
	v[x][y] = 1;
	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		int step = q.front().step;
		
		q.pop();
		if (x == n && y == m) {
			cout<<step<<endl;
			return;
		}
		for (int i = 0; i < 4; i ++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (a[nx][ny] == 'o' && !v[nx][ny]) {
				node = {nx, ny, step + 1};
				q.push(node);
				v[nx][ny] = 1;
			}
		}
	}
}

int main() {
	cin>>n>>m;
	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= m; j ++) {
			cin>>a[i][j];
			if (a[i][j] == '#') {
				v[i][j] = 1;
			}
		}
	}
	bfs(1, 1);
	return 0;	
}
