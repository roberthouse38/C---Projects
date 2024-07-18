#include <iostream>

int myNum = 3;

void printNum();


int main()
{
//LOCAL variable= declared inside a function or block in curly_braces{}
//GLOBAL variable = declared outside of all function, often seen in top of the program

//THIS myNum is a LOCAL variable inside the main function
    
    //int myNum = 1;
    std::cout << myNum << '\n';
    printNum();

return 0;
}

void printNum(){
//it is legal to use the same variable NAME as long as its within different SCOPE

//a function will use any local variable FIRST before resorting to global variable

//SCOPE RESOLUTION operator (::) is used for using the global variable

    //int myNum = 2;
    std::cout << ::myNum;
}


