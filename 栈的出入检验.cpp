#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int a[N], b[N];
int main() {
	int q, n;
	cin>>q;
	while (q --) {
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		stack<int> st;
		cin>>n; 
		
		for (int i = 1; i <= n; i ++) cin>>a[i];
		for (int i = 1; i <= n; i ++) cin>>b[i];	
		
		
		
		int j = 1;
		for (int i = 1; i <= n; i ++) {
			st.push(a[i]);
			while (!st.empty() && st.top() == b[j]) {
				j ++;
				st.pop();
			}
		}
		if (st.empty()) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		 
	
	}

	
} 
