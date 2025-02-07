#include<iostream>
using namespace std;
class Employee{
	string first_name;
	string last_name;
	double monthly_salary;
	public:
		void set_salary(int salary){
			if(salary<0){
				salary=0;
			}
			else{
				monthly_salary=salary;
			}
		}
		void set_firstname(string name){
			first_name=name;
		}
			void set_lastname(string name){
			last_name=name;
		}
		void get_firstname(string name){
			first_name=name;
		}
		void get_lastname(string name){
			last_name=name;
		}
		double increase_salary(double salary){
			monthly_salary+=salary*0.1;
			return monthly_salary;
		}
		void print_info(){
			cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Monthly Salary: $" << monthly_salary << endl;
		}
};
int main(
){
Employee emp1;
Employee emp2;
emp1.set_firstname("Syed");
emp1.set_lastname("Saad");
emp2.set_firstname("Muhammad");
emp2.set_lastname("Rayyan");
emp1.set_salary(2000);
emp2.set_salary(-100);
emp1.get_firstname("Syed");
emp1.get_lastname("Saad");
emp1.get_firstname("Muhammad");
emp1.get_firstname("Rayyan");
emp1.increase_salary(2000);
emp2.increase_salary(1000);
emp1.print_info();
emp2.print_info();
	return 0;
}