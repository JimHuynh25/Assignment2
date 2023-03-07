#include<iostream>
#include"Employee.h"
using namespace std;
int main()
{
	//Creating object of Professional employee
	cout << "PROFESSIONAL EMPLOYEE " << endl;
	ProfessionalEmployee professional("DYLAN", "T-mobile", 12000);
	professional.print();
	cout << "Weekly Salary: " << professional.weeklySalary() << endl;
	cout << "Health care: $: " << professional.insurance() << endl;
	cout << "Vacations: " << professional.vacations() << endl << endl;

	//Creating object of non professional employee
	cout << "NONPROFESSIONAL EMPLOYEE " << endl;
	NonProfessionalEmployee nonprofessional("Jim", "UMKC", 20, 12);
	nonprofessional.print();
	cout << "Weekly Salary: " << nonprofessional.weeklySalary() << endl;
	cout << "Health care: $ " << nonprofessional.insurance() << endl;
	cout << "Vacations: " << nonprofessional.vacations() << endl << endl;
}
