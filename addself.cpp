#include<bits/stdc++.h>
using namespace std;
int main(){
	int x = 1;
//	cout<<x ++ <<endl;  ���1
//	cout<<x<<endl;  ���2	
//	cout<< ++ x <<endl;  ���2 
//	cout<<x<<endl; // ���2 
//	int y = x ++;
//	cout<<x<<" "<<y<<endl; ���2  1 
	int y = ++ x;
	cout<<x<<" "<<y<<endl; // ���2  2 
	
	return 0;
}
