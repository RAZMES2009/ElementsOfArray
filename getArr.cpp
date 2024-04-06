#include <iostream>
#include <string>

double getMyArr()
{
    start:
    std::string inputString;
    std::cin >> inputString;
    try
    {
        bool minusFlag = false, datFlag = false;
        for (int j = 0; j < inputString.size(); j++)
        {
            if (inputString[0] == '-' && !minusFlag)
            {
                minusFlag = true;
                continue;
            }
            if (inputString[j] == '.' && !datFlag)
            {
                datFlag = true;
                continue;
            }
            if (!isdigit(inputString[j]))
                throw std::runtime_error("kek");
        }
        return stod(inputString);
    }
    catch (...)
    {
        std::cout << "Введено некорректное значение, повторите попытку" << std::endl;
        goto start;
    }
}
