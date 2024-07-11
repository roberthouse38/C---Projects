#include <iostream>

int main()
{   
//ternary operator (?:) = replacement to an if/else statement
// condition ? expression1 : expresion2;

    int grade = 50;

    //grade >= 60 ? std::cout << "You Pass it!" : std::cout << "you fail!";

    int number = 9;
    //number % 2  ? std::cout << "odd" : std::cout << "even";

    bool hungry = true;
    //hungry ? std::cout << "you are hungry" : std::cout << "you are full";
    std::cout << (hungry? "you are hungry \n" : "you are full \n" );


// Logical Operator
// && = check if two conditions are true
// || = check if at least one of two conditions is true
// !  = reverses the logical state of its operand

bool sunny = true;
int temp;

std::cout << "enter the temperature : ";
std::cin >> temp;

if (temp <= 0 || temp >= 30){
    std::cout << "the temperature is bad! \n";
}
else{
    std::cout <<"the temperature is good \n";
}


if (!sunny)
{
    std:: cout << "it is cloudy outside!"; //true
}
else
{
    std:: cout << "it is sunny outside"; //false
}


return 0;
}