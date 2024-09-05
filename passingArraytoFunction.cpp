#include <iostream>

double getTotal(double prices[], int size);

int main(){
//PASS ARRAY TO A FUNCTION

double prices[] = {49.99, 15.05, 75,9.99};
int size = sizeof(prices)/sizeof(prices[0]);
double total = getTotal(prices, size);

std::cout << "$" << total;

return 0;
}


// when a function receive an array  (double prices[]), it decays into a POINTER
// the function no longer knows the size of the array is
double getTotal(double prices[], int size){
    double total = 0;

for (int i = 0; i < size ; i++)
{
    total = total + prices[i];
}

return total;
}
