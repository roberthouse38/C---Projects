#include <iostream>

#include <vector> 
//typedef std::vector<std::pair< std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

//or you can using the "using"  rather than typedef keyword example :
using text_t = std::string;
using number_t = int;


using namespace std;
//namespace provides a solution for preventing name conflicts in large project, each entity needs a unique name.
// a name space allows for identically named entities as long as the namespace is differ.

namespace first {
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
//or u can use namespace as "using namespace xxx; "
using namespace second;

//std::cout << first ::x << " = Is using the first namespace" << "\n" ;
cout << x ;
//:: means scope resolution operator so im referring the first namespace

/*
evil line = "using namespace std" which allow you to didnt have to 
write the STD prefix so example is cout << x in line 18 can be executed normally. 
*/


//TYPEDEF-----------------------------
//reserved keyword used to create an additional name or lias for another data type

text_t firstName = "Lucky";
number_t age = 20;

std::cout << firstName << '\n';
std::cout << age << "\n";


}