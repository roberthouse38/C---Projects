#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "**********temp conversion************ \n";

    std::cout << "F = Fahrenheit \n";
    std::cout << "C= CELCIUS \n";
    std::cout << "what unit would you like to convert to:? ";

    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "enter the temperature in celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temp is : " << temp << "F \n";
    }

    else if (unit == 'C' || unit == 'c')
    {

        std::cout << "enter the temperature in fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "temp is : " << temp << "C \n";
    }

    else{
     std::cout << "Please enter in only C of F \n"   ;
    }

    std::cout << "****************end************ \n";
    return 0;
}