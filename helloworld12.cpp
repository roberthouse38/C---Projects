#include <iostream>
#include <ctime>


int main(){


//  ARRAY = a data structure that can hold MULTIPLE values/ 
//      = Values are accessed by an INDEX NUMBER starts with 0,1,2,3,......
//      = kind of like a variable that holds multiple values

//  Arrays should be on the same data type

//  Be sure to set the size of the array if the multiple value is declared later




    //std::string card[] = {"Corvette", "Mustang", "Camry"};
std::string cars[3];

cars[0] = "Camaro";     //Reassign Values
cars[1] = "Mustang";     
cars[2] = "Camry";       

std::cout << cars[0] << '\n';
std::cout << cars[1] << '\n';
std::cout << cars[2] << '\n';


double prices[] ={5.00, 7.50, 9.99, 15.00};
std::cout << prices[0] << '\n';
std::cout << prices[1] << '\n';
std::cout << prices[2] << '\n';
std::cout << prices[3] << '\n';

return 0;
}
