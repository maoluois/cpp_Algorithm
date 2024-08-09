#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
struct STU{
	string name;
	char sex;
	int age;
	
};
STU stu[110];
bool cmp(STU x, STU y){
	if (x.sex != y.sex) {
		return x.sex < y.sex;
	}
	return x.age > y.age;
}
int main() {
	int n;
	cin>>n;
	for (int i = 1;i <= n; i ++){
		cin>>stu[i].name>>stu[i].sex>>stu[i].age;
		
	}
	sort(stu + 1, stu + n + 1, cmp);
	for (int i = 1; i <= n; i ++) {
		cout<<stu[i].name<<" "<<stu[i].sex<<" "<<stu[i].age<<endl;
		
	} 
	 
	
	return 0;
	
	
	
} 
