#include <iostream>

bool checkNum(int num[], int size);

int main(){

//pass array to the func
int num[] = {-10,21,5,22,30,10};
int size = sizeof(num)/sizeof(num[0]);
bool result = checkNum(num, size);

    if (result) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

return 0;
}


bool checkNum(int num[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(num[i]==num[j]){return false;}
        }
    }
return true;

}


