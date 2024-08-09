#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ll long long
using namespace std;
int a[210];

int main() {
	string s;
	cin>>s;
	for (int i = 0; i < s.size(); i ++) {
		a[s[i]] ++;
	}
	int mx = 0;
	char x;
	for (int i = 0; i < s.size(); i ++) {
		if (a[s[i]] > mx) {
			mx = a[s[i]];
			x = s[i]; 
		}
	}
	cout<<x<<" "<<mx;
	return 0;
} 
