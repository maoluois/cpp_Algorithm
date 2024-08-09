#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
bool v[N];
int main() {
	queue<int> q;
	int m, n;
	cin>>m>>n;
	int x, cnt = 0;
	for (int i = 1;i <= n; i ++) {
		cin>>x;
		if (v[x] == 0) {
			if (q.size() == m) {
				v[q.front()] = 0;
				q.pop();
				
			}
			v[x] = 1;
			q.push(x);
			cnt ++;
			
		}
	}
	cout<<cnt;
	return 0;
} 
