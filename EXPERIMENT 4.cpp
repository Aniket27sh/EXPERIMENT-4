#include <iostream>
using namespace std;

class Employee {
    string name;
    float basicSalary, bonus, totalSalary;

public:
    // Default constructor
    Employee() {
        name = "Aman";
        basicSalary = 40000;
        bonus = 5000;
    }

    // Parameterized constructor
    Employee(string n, float b, float bo) {
        name = n;
        basicSalary = b;
        bonus = bo;
    }

    // Function to calculate and display total salary
    void display() {
        totalSalary = basicSalary + bonus;

        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    // Using default constructor
    Employee e1;
    cout << "Default Constructor:" << endl;
    e1.display();

    cout << "\nParameterized Constructor:" << endl;

    // Using parameterized constructor
    Employee e2("Aniket", 50000, 7000);
    e2.display();

    return 0;
}