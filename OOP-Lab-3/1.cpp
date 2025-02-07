#include<iostream>
using namespace std;
class User{
	public:
	string name;
	int age;
};
int main(){
	User u;
	u.name="teo";
	u.age=24;
	cout<<"My name is "<<u.name<<" and I am "<<u.age<<" years old";
	return 0;
}