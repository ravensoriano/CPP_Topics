// Topic: Constructor in C++
// Synopsis: Program that will sort out the information about the employee using Constructor.
// Author: Raven Soriano

#include <iostream>
#include <string>
using namespace std;


class Employee {
public:
    string Name;
    int Age;
    string Position;

    // Constructor Structure
    Employee (string name, int age, string position) {
        Name = name;
        Age = age;
        Position = position;
    }

};

int main() {

    Employee employee1("James", 19, "Crew Member");
    cout << employee1.Name << endl; // James

    Employee employee2("Carl", 25, "Team Leader");
    cout << employee2.Age << endl; // 25

    Employee employee3("Betty", 23, "Manager");
    cout << employee3.Position << endl; // Manager

    return 0;
}

