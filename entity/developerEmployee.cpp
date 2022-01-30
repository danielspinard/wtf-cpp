#include <iostream>

using std::string;

namespace entity
{
    class developerEmployee
        : public employee
    {
    private:
        string Language;

    public:
        developerEmployee(string name, float salary, string language)
            : employee("developer", name, salary)
        {
            Language = language;
        }

        string getLanguage()
        {
            return Language;
        }

        string roleDescription()
        {
            return "lorem ipsum";
        }
    };
}