#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main(){
//search array for an element


//int numbers[] = {1,2,3,4,5,6,7,8,9,10};

std::string foods[] = {"pizza", "hamburger", "hotdog"};
int size = sizeof(foods)/sizeof(foods[0]);
int index;
std::string myfood;

//int myNum; //The number that we looking for!
 
std::cout << "Enter element to search for: " <<'\n';
std::getline(std::cin, myfood);

index = searchArray(foods, size, myfood);

if (index != -1)
{
    std::cout << myfood << " is at index: " << index;
}
else{
    std::cout << myfood << " isnt in the array";
}


return 0;
}

//return the integer the index number that we looking for
int searchArray(std::string array[], int size, std::string element){

for (int i = 0; i < size; i++)
{
    if(array[i] == element){
        return i;
    }
}
return -1;
//-1 = sentinel value, typically means something wasnt founded

}