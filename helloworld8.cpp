#include <iostream>
#include <ctime>

int main()
{

//pseudo-random = not truly random but close

srand(time(NULL)); //seed number

int num1 = (rand() % 20) + 1; 
//store the random num 
//rand() function wil generate number between 0 and 32767
//% is for range between number that you desire
//+ 1 is for the starter number

int num2 = (rand() % 20) + 1; 
int num3 = (rand() % 20) + 1; 

std::cout << num1 <<'\n';
std::cout << num2 <<'\n';
std::cout << num3 <<'\n';


return 0;
}