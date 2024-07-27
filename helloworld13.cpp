#include <iostream>
#include <ctime>


int main(){

//sizeOf() = determines the size in bytes of a VARIABLE, DATA TYPE, CLASS, OBJECT, etc

std::string name = "bro code";
double gpa = 2.5;
char grade = 'F';
bool student = true;

char grades[] = {'A','B','C','D','E','F'};
std::string students[] = {"Spongebob","Patrick","Squidward", "Sandy"};


std::cout << sizeof(grades)/sizeof(char) << " elements\n";



return 0;
}
