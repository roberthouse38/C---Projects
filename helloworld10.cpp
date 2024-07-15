#include <iostream>
#include <ctime>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{

//Overloaded function
//its valid for a function to share a same name but we need a different set of parameter

bakePizza("pepperoni");
bakePizza("pepperoni", "mushroom" );

return 0;
}



//function can share names but you need a diff set of a parameters
void bakePizza(){
std::cout << "here is your pizza \n";
}

//function signature is for differenting this function with another one, needs to be unique
void bakePizza(std::string topping1){
std::cout << "here is your " << topping1 << " pizza! \n";
}

void bakePizza(std::string topping1, std::string topping2){
std::cout << "here is your " << topping1 << " and " << topping2 << " pizza! \n";
}