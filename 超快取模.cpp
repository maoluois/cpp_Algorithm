#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
 
int main() {
	int t;
	cin>>t;
	while (t --) {
		vector<int> v;
		int x;
		string p;
		cin>>x>>p;
		v.push_back(x % 10);
		while (1) {
			int t = v.back() * x % 10;
			if (t == v[0]) {
				break;
			}
			v.push_back(t);
		}
		
		int tmp = 0;
		for (int i = 0; i < p.size(); i ++) {
			tmp = tmp * 10 + p[i] - '0';
			tmp %= v.size();
		}
		cout<<v[(tmp - 1) % v.size()]<<endl;
	}
	
	
	
	
	return 0;
}

