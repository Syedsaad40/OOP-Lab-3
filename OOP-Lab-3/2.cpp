#include<iostream>
using namespace std;
class Date{
	int month;
	int day;
	int year;
	public:
		set_date(int day){
			this-> day=day;
		}
		set_month(int month){
			this->month = month;
		}
		set_year(int year){
			this->year = year;
		}
		display_date(){
			cout<<month<<"/"<<day<<"/"<<year<<endl;
		}
};
int main(){
	Date d;
	d.set_date(07);
	d.set_month(02);
	d.set_year(2025);
	d.display_date();
	return 0;
}