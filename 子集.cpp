#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int a[N];
int v[N];
int n;
int cnt; 
void print() {
	cout<<"{";
	bool flag = 1;
	for (int i = 0; i <= n; i ++) {
		if (v[i]) {
			if (flag) {
				cout<<a[i];
				flag = 0;
			}
			else{
				cout<<","<<a[i];
			}
		}
	} 
	
	cout<<"}"<<endl;
}	
	
void dfs (int x) {
	if (x > n) {
		print();
		cnt ++;
		return;
	}
	
	v[x] = 1;
	dfs(x + 1);
	v[x] = 0;
	dfs(x + 1);
}	
int main() {
	
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
	}	
	dfs(1);
	return 0;
} 
