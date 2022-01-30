#include <iostream>

using std::string;

namespace entity
{
    class employee
    {
    private:
        string Name;
        string Role;
        float Salary;

    public:
        // constructor
        employee(string role, string name, float salary)
        {
            Role = role;
            Name = name;
            Salary = salary;
        }

        // getters
        string getRole()
        {
            return Role;
        }

        string getName()
        {
            return Name;
        }

        float getSalary()
        {
            return Salary;
        }

        // abstract methods
        virtual string roleDescription() = 0;
    };
}