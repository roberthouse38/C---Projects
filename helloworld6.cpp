#include <iostream>

int main(){

//string method
// length(), empty(), clear(), append()
std::string name;

std::cout << "enter your name: ";
std::getline(std::cin, name);



if(name.length()>12){
    std::cout << "your name cant be over 12 char";
}
else{
    std::cout << "welcome " << name << "\n";
}




if(name.empty()){
    std::cout << "you didnt enter your name!";
}
else{
    std::cout << "hello " << name <<"\n";
}

    //name.clear();
    //std::cout << "hello " << name;
    // this is to clear the value .

    //append a string to another string
    name.append("@gmail.com");
    std::cout << "your username is now " << name << "\n";

    // return a char at a given index position 
    // at()
    std::cout << name.at(0) << "is example of at() \n" ;

    // insert a char at a given position 
    // insert()

    name.insert(0,"@");
    std::cout << name;


    //delete char
    name.erase(0,3);

    //find() is string method to return the index position for the desirable char
    std::cout << name.find(' ');



    return 0;

}