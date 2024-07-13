#include <iostream>
#include <ctime>

int main()
{

int num; //random generated number
int guess; //hold the random number that player need to guess
int tries; //how many tries a player can get

srand(time(NULL));
num = (rand() % 100) + 1;

std::cout << "**************** NUMBER GUESSING GAME *******************" << '\n';

do
{
    std::cout << "ENTER a guess between (1-100): ";
    std::cin >> guess;
    tries++;

    if(guess > num){
        std::cout << "Too high! \n";
    }
    else if (guess < num){
        std::cout << "too low! \n";
    }
    else{
        std::cout << "Correct! # of tries: " << tries << '\n';
    }
} while (guess != num);

std::cout << "**************** NUMBER GUESSING GAME *******************" << '\n';

return 0;
}