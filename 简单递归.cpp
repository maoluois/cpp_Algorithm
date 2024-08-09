#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
const int N = 1e5 + 10;
void print(int n) {
	if (n < 1) {
		return;
	}
	n --;
	print(n);
	cout<<n<<endl;
}
int main() {
	int n;
	cin>>n;
	print(n);
	return 0;
}
