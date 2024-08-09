#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;

struct Node {
	int x, y, step;	
}; 
int a[110][110];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
void bfs(int x, int y) {
	queue<Node> q;
	Node node = {x, y, 0};
	q.push(node);
	a[x][y] = 0;
	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		int step = q.front().step;
		q.pop();
		for (int i = 0; i < 4; i ++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (a[nx][ny] == -1) {
				node = {nx, ny, step + 1};
				q.push(node);
				a[nx][ny] = step + 1;
			}
		}
		
	}
	
}
int main() {
	int n, x, y;
	cin>>n>>x>>y;
	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= n; j ++) {
			a[i][j] = -1;
			
		}
	
	}
	int m, u, v;
	cin>>m;
	while (m --) {
		cin>>u>>v;
		a[u][v] = -2;
	}
	 
	bfs(x, y);
	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= n; j ++) {
			printf("%2d", a[i][j]);
		}
		cout<<endl;
	}
	
	
	return 0;
}
