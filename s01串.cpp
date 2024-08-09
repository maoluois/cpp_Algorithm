#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int a[N];

void s01(string s, int x) {
	if (x == 0) {
		cout<<s;
		return;
	}
	string str = "";
	for (int i = 0; i < s.size(); i ++) {
		if (s[i] == '0') {
			str += "1";
		}
		else {
			str += "01"; 
		}
	}
	s01(str, x - 1);
}

int main() {
	int n;
	cin>>n;
	s01("0", n);
	return 0;
	
}
