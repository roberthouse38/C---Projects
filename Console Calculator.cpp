#include <iostream>

int main() {
    
char op;
double num1;
double num2;
double result;

std::cout << "***************CALCULATOR*************** \n";

std::cout << "enter either (+,-,*,/): ";
std::cin >> op;

std::cout<< "enter first number : ";
std::cin >> num1; 

std::cout<< "enter second number : ";
std::cin >> num2; 

switch (op)
{
case '+':
    result = num1 + num2;
    std::cout << "result: " << result << '\n';
    break;
 
case '-':
    result = num1 - num2;
    std::cout << "result: " << result << '\n';
    break;

case '*':
    result = num1 * num2;
    std::cout << "result: " << result << '\n';
    break;

    case '/':
    result = num1 / num2;
    std::cout << "result: " << result << '\n';
    break;

default:
std::cout << "Use the operator +,-,*,/ and just 2 number \n";
    break;
}

std::cout << "***************CALCULATOR END*************** ";
    return 0;
}