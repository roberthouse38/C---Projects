#include <iostream>

void findKeys(int limit) {
    std::cout << "Nilai Kunci range 1-100 adalah :" << limit << ":\n";
    for (int i = 3; i < limit; i += 8) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int limit = 100; 
    findKeys(limit);

    return 0;
}

//k % 8 == 3


