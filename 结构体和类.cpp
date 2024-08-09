#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
struct Stu{
	public:
		string name;
		char sex;
		int age;
		int score;
		void print() {
			cout<<name<<endl;
		}
		void print1();
		void set(int x) {
			score = x;
		}
};
void Stu::print1() {
	cout<<score<<endl;
}
Stu a;
bool cmp(Stu x, Stu y) {
	if (x.sex != y.sex) {
		return x.sex < y.sex;
		
	}
	return x.age > y.age;
}

int main() {
	a.name = "liming";
	a.sex = 'm';
	a.age = 20;
	a.score = 100;
	a.print();
	a.print1();
	a.set(90);
	a.print1();
	cout<<a.name<<" "<<a.sex<<" "<<a.age<<" "<<a.score; 
 	return 0;	
	
	
}



 
