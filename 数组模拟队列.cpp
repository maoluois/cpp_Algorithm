#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int a[N], b[N];
int head = 1, tail = 0;
int main() {
	int m;
	cin>>m;
	while (m --) {
		string s;
		int x;
		cin>>s;
		if (s == "push") {
			cin>>x;
			a[++tail] = x;
		}
		else if (s == "pop") {
			if (head <= tail) {
				head ++;
			}
		}
		else if (s == "query") {
			cout<<a[head]<<endl;
		}
		else {
			if (head > tail) cout<<"Yes"<<endl; 
			else cout<<"No"<<endl;
		}
	}
}
