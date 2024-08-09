#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int main() {
	queue<int> a;
	for (int i = 1; i <= 5; i ++) {
		a.push(i);
	}
	cout<<a.front()<<" "<<a.back()<<endl;
	a.pop();
	cout<<a.front()<<endl;
	cout<<a.empty()<<endl;
	cout<<a.size()<<endl;
	a = queue<int>();
	return 0;
}
