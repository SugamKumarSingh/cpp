/*
input personal details of n emplooyes and find the elder one
*/

#include <iostream>
using namespace std;

class employee
{
public:
    char name[20], designation[15];
    int age;

    employee()
    {
        cout << "Enter employee's name: ";
        cin >> name;
        cout << "Enter employee's designation: ";
        cin >> designation;
        cout << "Enter employee's age: ";
        cin >> age;
        cout << endl;
    }
    void display()
    {
        cout << "\nName of the employee is " << name << endl;
        cout << "Designation of the employee is " << designation << endl;
        cout << "Age of the employee is " << age << endl;
    }
};

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    employee emp[n];

    string elderName;
    int eldest = 0;

    for (int i = 0; i < n; i++)
    {
        if (emp[i].age > eldest)
        {
            eldest = emp[i].age;
            elderName = emp[i].name;
        }
    }

    cout << "Eldest employee is " << elderName << endl;
    cout << "His age is " << eldest << endl;

    return 0;
}