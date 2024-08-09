#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int main() {
	stack<int> a;
	for (int i = 1; i <= 5; i ++) {
		a.push(i);
	}
	cout<<a.top()<<endl;
	a.pop();
	cout<<a.top()<<endl;
	cout<<a.empty()<<endl;
	cout<<a.size()<<endl;
	a = stack<int>();
}
