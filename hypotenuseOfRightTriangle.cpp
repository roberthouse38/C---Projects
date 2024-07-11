#include <iostream>
#include <cmath>

//A PROGRAM for searching a hypotenuse for right angled triangle
//hypotenuse is c = sqrt of a^2 + b^2

int main() {

double a;
double b;

std::cout << "enter side A: "; 
std::cin >> a;
std::cout << "enter side B: ";
std::cin >> b;

double c = sqrt(pow(a,2) + pow(b,2));

std::cout << "side C is: " << c ;

}