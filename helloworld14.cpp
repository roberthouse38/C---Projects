#include <iostream>
#include <ctime>


int main(){

    //Iterate over the element of array

std::string students[] = {"Spongebob", "Patrick", "Squidward","Sandy"};
char grades[] = {'A','B','C','D','F'};

std::cout << students[0] << '\n';
std::cout << students[1] << '\n';
std::cout << students[2] << '\n' ;

std::cout << "------------------------------------" << '\n' ;
//above is example to show every value from an array, but there is another way

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
            std::cout << grades[i] << '\n';
    }

// the for loop makes you didnt have to change the number inside the loop because sizeOf();

return 0;
}
