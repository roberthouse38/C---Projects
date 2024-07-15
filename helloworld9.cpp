#include <iostream>
#include <ctime>



/*
int main()
{
// function = a block of reusable code
//to invoke the function type the function name folowed by a a parentheses
//you can call the function after the function declared because c++ is top down readed

std::string name = "Lucky";
int age = 20;

//pass the variable or some value as an argument

happyBirthday(name, age);

    return 0;
}


//match the parameter guys
void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to "<< name <<"\n";
    std::cout << "Happy Birthday to "<< name <<"\n";
    std::cout << "Happy Birthday dear "<< name <<"\n";
    std::cout << "Happy Birthday to "<< name <<"\n";

    std::cout << "you are "<< age << " years old"<<"\n";
}
*/





double square(double len);
double cube(double len);
std::string concatString(std::string string1, std::string string2);

int main() {
// RETURN KEYWORD
// return a value back to the spot where you called the encompassing function

std::string firstName = "Lucky";
std::string lastName = "De Luca";
std::string fullName = concatString(firstName, lastName);

std::cout << "Hello " << fullName << '\n'; 

double len;
std::cout << "Enter the length of the square!: ";
std::cin >> len;

double volume = cube(len);

double area = square(len);
std::cout << "Area : " << area << "cm^2\n";
std::cout << "Volume : " << volume << "cm^3\n";
return 0;
}





std::string concatString(std::string string1, std::string string2){
return string1 + " " + string2;
}

double square(double len){
double result = len * len;
return result;
}

double cube(double len){
double result = len * len * len;
return result;
}

// If you need to return a value back to the spot in which you invoked a function
// Be sure to LIST the data type of what you returning
// example if you want to return the float number, use double data type in the function