#include <iostream>

using std::string;

namespace entity
{
    class sellerEmployee
        : public employee
    {
    private:
    public:
        sellerEmployee(string name, float salary)
            : employee("seller", name, salary)
        {
        }

        string roleDescription()
        {
            return "lorem ipsum i'am seller";
        }
    };
}