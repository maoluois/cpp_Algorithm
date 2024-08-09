#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
int f(int n) {
	if (n == 1) {
		return 1;
	}
	return f(n - 1) + n; 
} 
int main() {
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}
