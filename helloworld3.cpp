#include <iostream>
#include <cmath>

int main() {
   //arithmetic operation (+,-,*,/)
   //increment operator (++)
   //decrement operator (--)

   //modulus operator (%) great for reckonize odd an even number
   //remind to use double so you can get decimal number rather than integer

   //use parentheses () to write a logic math

   /*
int students = 20;
int students = 6 - (5 + 4) * 3 / 2;       //equals -7

students = students + 1;
students+=1;
students++;

students = students -1;
students-=1;
students--;

students = students * 2;
students*=2;

students = students /2;
students/=2;

int remainder = students % 2;

std::cout << remainder;
std::cout << students;

  //type conversion = conversion a value of one data type to another
  //implicit = automatic
  //exolicit = precede value wiith new data type

double a = (int)3.14;
std::cout << (char) 100 ;  // the result is "d"

int correct = 8;
int question = 10;
double score = correct/(double)question * 100;
std::cout << score << "%";

   //USER INPUT
   //COUT << (insertion operator)
   //cin >> (extraction operator)

std::string name;
int age;

std::cout << "whats your age? : ";
std::cin >> age;

std::cout << "whats your full name? : ";
   // use getline function if the string contain space. Use parentheses!
   // std ws is whitespaces to correct the std::cin followed by std::getline issues (new line character problem)
std::getline(std::cin >> std::ws, name);


std::cout << "Hello " << name << "\n";
std::cout << "you are " << age << " years old";

*/

   //8 usefull math function in c++
   //1. max function to return the greater of 2 values or 2 variables
   //2. min function 
   //3. power x^y (use inlude <cmath>)
   //4. square root 
   //5. absolute value
   //6. rounding value
   //7. ceiling function  (rounding up)
   //8. floor function    (rounding down)

double x = 3;
double y = 4;
double pi = 3.14; 
double z;

//z = std::max(x,y);
//z = std::min(x,y);
//z = pow(x, y);
//z = sqrt(y);
//z = abs(-1000);
//z = round(pi);
//z = ceil(pi);


std::cout << z;

return 0;
}





