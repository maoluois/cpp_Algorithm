#include<bits/stdc++.h>
using namespace std;
int main(){
	int x = 1;
//	cout<<x ++ <<endl;  输出1
//	cout<<x<<endl;  输出2	
//	cout<< ++ x <<endl;  输出2 
//	cout<<x<<endl; // 输出2 
//	int y = x ++;
//	cout<<x<<" "<<y<<endl; 输出2  1 
	int y = ++ x;
	cout<<x<<" "<<y<<endl; // 输出2  2 
	
	return 0;
}
