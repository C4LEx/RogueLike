#include "inputcheck.h";
#include "error.h";

Inputcheck::Inputcheck()
{
    input = 0;
}

bool Inputcheck::isIntInputValid(int input, std::vector<int> inputs)
{
    for (unsigned int i = 0; i < (inputs.size()); i++)
    {
        if (inputs.at(i) == input)
            return true;
    }
    return false;
}

int Inputcheck::makeIntInputValid(std::vector<int> inputs)
{
    bool check = true;
    while (check)
    {
        std::cin >> input;
        if (isIntInputValid(input, inputs))
        {
            check = false;
            return input;
        }
        else
        {
            Error errorcode;
            errorcode.printOutError(1);
            std::cin.clear();
            std::cin.ignore();
        }
    }
    return 0;
}