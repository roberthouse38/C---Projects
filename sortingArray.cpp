#include <iostream>
#include <ctime>

void sort(int numbers[], int size);

int main(){
 //Sorting an Array using Bubble Sort

 int numbers[] = {10, 7, 4, 5, 3, 2, 6, 1, 8, 9};
 int size = sizeof(numbers)/sizeof(int);

sort(numbers, size);

for (int element : numbers)
{
    std::cout << element << " ";
}

return 0;
}





void sort(int numbers[], int size){

int temporary;
for(int i = 0; i < size - 1 ; i++){
    for (int j = 0; j < size - i - 1; j++)
    {
        if(numbers[j] > numbers[j + 1]){
            temporary = numbers[j];
        }

        else if (/* condition */)
        {
            /* code */
        }
        
    }
    


}

}