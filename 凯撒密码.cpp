#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ll long long
using namespace std;
int main(){
	string s;
	cin>>s;
	for (int i = 0; i < s.size(); i ++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = (s[i] - 'a' + 5) % 26 + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = (s[i] - 'A' + 5) % 26 + 'A';
		}
	}
	cout<<s;
}
