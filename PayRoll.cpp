#include<bits/stdc++.h>
using namespace std;

struct Employee {
    int id;
    string name;
    float hoursWorked;
    float hourlyRate;
};
void inputEmployee(Employee &A) {
    cout << "Enter Employee ID: ";
    cin >> A.id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, A.name);
    cout << "Enter Hours Worked: ";
    cin >> A.hoursWorked;
    cout << "Enter Hourly Rate (₹): ";
    cin >> A.hourlyRate;
}
float calculateSalary(const Employee &A) {
    return A.hoursWorked * A.hourlyRate;
}
void displayEmployee(const Employee &A) {
    cout << fixed << setprecision(2);
    cout << "ID: " << A.id <<endl; 
    cout   << "  Name: " << A.name <<endl; 
    cout    << "  Hours: " << A.hoursWorked <<endl; 
    cout    << "  Rate: ₹" << A.hourlyRate <<endl; 
    cout    << "  Salary: ₹" << calculateSalary(A) << endl;
}

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "    PAYROLL SYSTEM (NO CLASS) " <<endl;
        cout << "1. Add New Employee" <<endl;
        cout << "2. View All Employees" <<endl;
        cout << "3. Exit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                Employee A;
                inputEmployee(A);
                employees.push_back(A);
                cout << "Employee Added" <<endl;
                break;
            }
            case 2: {
                if (employees.empty()) {
                    cout << " No employees found." <<endl;
                } else {
                    cout << "--- Employee List ---" <<endl;
                    for (const auto& A : employees) {
                        displayEmployee(A);
                    }
                }
                break;
            }
            case 3:
                cout << " Exiting Program" <<endl;
                break;
            default:
                cout << " Invalid choice" <<endl;
        }

    } while (choice != 3);

    return 0;
}
