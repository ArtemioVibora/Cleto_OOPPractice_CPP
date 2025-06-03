#include <iostream>

using namespace std;

class Employee {
    private:

        int employeeID;
        int hourlyRate;
        int hoursWorked;
        int numberOfDependencies;
        float grossPay;
        float socialSecurityTax;
        float HDF;
        float professionalIncomeTax;
        float healthInsurance;
        float netTakeHomePay;

    public:

        Employee() : employeeID(0), hourlyRate(0), hoursWorked(0), numberOfDependencies(0),
            grossPay(0), socialSecurityTax(0), HDF(0), professionalIncomeTax(0), healthInsurance(0), netTakeHomePay(0) {}

        void enterEmployeeDetails() {
            cout << "Enter employee ID: ";
            cin >> employeeID;
            cout << "Enter employee hourly rate: ";
            cin >> hourlyRate;
            cout << "Enter employee hourly worked: ";
            cin >> hoursWorked;
            cout << "Enter employee number of dependencies: ";
            cin >> numberOfDependencies;
        }

        float getGrossPay() {
            if (hoursWorked >= 40) {
                grossPay = (float)(hourlyRate * hoursWorked) + ((hoursWorked - 40) * hourlyRate * 0.5f);
            }
            else {
                grossPay = (float)hourlyRate * hoursWorked;
            }

            return grossPay;
        }

        float getSocialSecurityTax() {
            socialSecurityTax = 0.015f * grossPay;
            return socialSecurityTax;
        }

        float getHDF() {
            HDF = 0.03f * grossPay;
            return HDF;
        }

        float getProfessionalIncomeTax() {
            professionalIncomeTax = 0.1f * grossPay;
            return professionalIncomeTax;
        }

        float getHealthInsurance() {
            if (numberOfDependencies < 3) {
                healthInsurance = 0;
            }
            else {
                healthInsurance = 300;
            }
            return healthInsurance;
        }

        float getNetTakeHomePay() {
            netTakeHomePay = grossPay - (socialSecurityTax + HDF + professionalIncomeTax + healthInsurance);
            return netTakeHomePay;
        }

        void displayEmployee() {
            cout << "For Employee " << employeeID << endl << endl;
            cout << "Gross pay: " << getGrossPay() << endl << endl;
            cout << "social Security Tax: " << getSocialSecurityTax() << endl;
            cout << "HDF: " << getHDF() << endl;
            cout << "professional Income: " << getProfessionalIncomeTax() << endl;
            cout << "Health Insurance: " << getHealthInsurance() << endl << endl;
            cout << "Net Take Home Pay for the week: " << getNetTakeHomePay() << endl;
        }
};

int main() {
    Employee employee1, employee2;

    cout << "For Data for 1st Employee" << endl;
    employee1.enterEmployeeDetails();
    cout << endl;
    employee1.displayEmployee();
    cout << endl;

    cout << "For Data for 2nd Employee" << endl;
    employee2.enterEmployeeDetails();
    cout << endl;
    employee2.displayEmployee();
}
