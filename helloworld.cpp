#include <iostream>

namespace first{
    int x = 1;
}



int main() {
//comment using with "//"

/*
this is a multi line comment
*/

//PART 1 ABOUT integer
int x; //declaration
x = 5; //assignment
int y = 6;
int sum = x + y;
//std::cout << x << '\n';
//std::cout << y << '\n';
//std::cout << sum << '\n';


//example of truncation
int age = 23;
int days = 22.3;
//std::cout << days ;
//output is 22 because "days" variable is not in float or double data type 


//double (number including decimal)
double price = 10.88;
double gpa = 3.6;
double temperature = 25.1;
//std::cout << price;


//single character
char grade = 'A';
char initial = 'C';
//std::cout << initial;
/*
IF You try to run the initial variabel it will displa warning message because you 
type 2 char in single char. here is an example of warning message and it will gave an output "C"

helloworld.cpp:38:16: warning: overflow in conversion from 'int' to 'char' 
changes value from '16963' to '67' [-Woverflow]*/

//boolean
bool student = true;
bool power = false;

//string (pbject that represents a sequence of text)
std::string name = "Lucky";
std::string day = "wednesday";
std::string address = "5th avenue";
//std::cout << name ;


//display a variable along with string text
//std::cout << "hello " << name << "\n";
//std::cout << "you are " << age << " years old";


//FORMULA of circumference of circle
const double PI = 3.14; //const or constant means the value of the variable is firm and cant replaced
int length = 20;

double circumference = 2 * PI * length;
std::cout << circumference << "cm";


return 0;
}