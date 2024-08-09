#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int main() {
	string s;
	cin>>s;
	stack<char> a;
	a.push('#');
	for (int i = 0;i < s.size(); i ++) {
		if (s[i] == ')') {
			if (a.top() == '(') {
				a.pop();
			}
			else {
				a.push(s[i]);
			}
		}
		
		else if (s[i] == ']') {
			if (a.top() == '[') {
				a.pop();
			}
			else {
				a.push(s[i]);
			}
		}
		
		else a.push(s[i]); 
		
	}
	if (a.top() == '#') cout<<"Yes";
	else cout<<"Wrong";
}
