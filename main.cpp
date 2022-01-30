#include <iostream>
#include "entity/employee.cpp"
#include "entity/developerEmployee.cpp"
#include "entity/sellerEmployee.cpp"

using std::string;
using namespace entity;

void separator()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "-";
    }

    std::cout << std::endl;
}

int main()
{
    // developer entity
    developerEmployee dev = developerEmployee("Daniel", 800, "PHP");
    std::cout << "name: " << dev.getName() << std::endl;
    std::cout << "salary: $" << dev.getSalary() << std::endl;
    std::cout << "role: " << dev.getRole() << std::endl;
    std::cout << "role description: " << dev.roleDescription() << std::endl;
    std::cout << "main language: " << dev.getLanguage() << std::endl;

    separator();

    // seller entity
    sellerEmployee seller = sellerEmployee("Jhonny", 825.50);
    std::cout << "name: " << seller.getName() << std::endl;
    std::cout << "salary: $" << seller.getSalary() << std::endl;
    std::cout << "role: " << seller.getRole() << std::endl;
    std::cout << "role description: " << seller.roleDescription() << std::endl;

    return 1;
}
