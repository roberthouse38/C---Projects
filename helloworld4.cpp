#include <iostream>

int main(){

   //IF STATEMENT = do seomthing IF the condition is true, if not then something ELSE is true
   
   //comparison operator == , > , < , >= , <=

   //switch case = alternative to using many "else if" statements. Compare one value against matching cases

int age;
std::cout << "enter your age : " ;
std::cin >> age;

/*
if (age >= 100)
{
    std::cout << "you are too old to enther this site!";
}
else if (age >= 18){
    std::cout << "welcome to the site!";
}
else if (age < 0)
{
    std::cout << "you havent been borned yet";
}
else if (age >= 100)
{
    std::cout << "you are too old to enther this site!";
}
else{
    std::cout << "you are not old enough to enter";
}
*/

int month;
std::cout << "enter the month (1-12) : " ;
std::cin >> month;

/* 
if(month == 1){
    std::cout << "it is january";
}
else if(month == 2){
    std::cout << "it is february";
}
else if(month == 3){
    std::cout << "it is march";
}
else if(month == 4){
    std::cout << "it is april";
}
else if(month == 5){
    std::cout << "it is may";
}
else if(month == 6){
    std::cout << "it is june";
}
*/

/*
switch (month)
{
case 1:
    std::cout << "it is january";
    break;
    
    case 2: 
    std::cout << "it is february";
    break;

    case 3:
    std::cout << "it is march";
    break;

    case 4:
    std::cout << "it is april";
    break;

    case 5:
    std::cout << "it is may";
    break;

    case 6:
    std::cout << "it is june";
    break;

//if there are no matching cases for any if or elses, use default case
default:
std::cout << "please enter in only numbers (1-12)" ;
    break;
}
*/

char grade;
std::cout <<"what letter grade?: ";
std::cin >> grade;

switch (grade)
{
    case 'A':
    std::cout << "You did great!";
    break;
    case 'B':
    std::cout << "You did good!";
    break;
    case 'C':
    std::cout << "You did okay!";
    break;
    case 'D':
    std::cout << "You didnt do good!";
    break;
    case 'E':
    std::cout << "You failed!";
    break;

    default:
    std::cout << "please enter only in a letter grade (A-F)";
    break;
}


return 0;
}