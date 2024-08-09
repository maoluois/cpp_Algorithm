#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int main() {
	queue<int> q;
	int n, m;
	cin>>n>>m;
	for (int i = 1; i <= n; i ++) {
		q.push(i);
	}
	int id = 1;
	while (!q.empty()) {
		if (id == m) {
			cout<<q.front()<<" ";
			q.pop();
			id = 1; 
		}
		else {
			id ++;
			q.push(q.front());
			q.pop();
		}
	} 
	return 0;
}
