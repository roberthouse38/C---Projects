#include <iostream>
#include <ctime>


int main(){

//Foreach Loop = loop that eases the traversal over an iterable data set

std::string students[] = {"Spongebob", "Patrick", "Squidward","Sandy"};

int grades[] = {65,76,33,27,44};

for(std::string student : students){std::cout << student << '\n';}

for(int grade : grades){
    std::cout << grade << '\n';
}

//Untuk setiap nilai pada KUMPULAN NILAI tolong tampilkan tiap nilai nya

return 0;
}
