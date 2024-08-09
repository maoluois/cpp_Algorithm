#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
char a[110][110];

struct Node {
	int x, y, step;	
}
int a[110][110];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
void bfs(int x, int y) {
	queue<Node> q;
	Node node = {x, y, 0};
	
}

int main(){
	int n, x, y;
	cin>>n>>x>>y;
	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= m; j ++) {
			a[i][j] = -1;
		}
	}
	bfs(x, y);
	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= m; j ++) {
			cout<<a[i][j]<<" ";
			
		}
	}
}
