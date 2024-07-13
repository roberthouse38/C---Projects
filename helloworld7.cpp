#include <iostream>

int main()
{

    //WHILE LOOPS to make infinite program or recursive program when the condition is met

/*
    std::string name;

    while(name.empty()){
        std::cout << "Enter Your Name: ";
        std::getline(std::cin, name);
    }
 
    std::cout << "hello " << name ;
*/

    //DO WHILE Loops will do some block of code first then repeat again if condition is true


/*
    int number;
    do 
    {
        std::cout <<"enter a positive number: ";
        std::cin >> number;
    }   
    while (number < 0);
    std::cout << "the number is: " << number;
*/    


    //FOR LOOPS. execute a block of code a specify amount of time!
    // inside the brace, you can give up to 3 statements
    //first is index as a counter, second is the condition, third is increment or decrement for the index

    for(int i = 10; i >= 0; i--){
    std::cout << i << '\n';
    }
   std::cout << "Happy New Year! \n";



    //break() = break out of loop
    //continue() = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            break;
        }
        std::cout << i << '\n';
    }



    //NESTED LOOP = a loop inside another loop
    
    int rows;
    int columns;
    char symbol;

    std::cout << "How Many rows? : ";
    std::cin >> rows;

    std::cout << "How many columns? : ";
    std::cin >> columns;

    std::cout << "enter a symbol : ";
    std::cin >> symbol;

    //create rows & columns 
    for (int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            std::cout << symbol ;
        }
        std::cout << '\n';
    }



    for (int i = 1; i <=3; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
    

    return 0;
}