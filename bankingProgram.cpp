#include <iostream>
#include <iomanip> //set some precision for floating point numbers

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

do
{
    std::cout << "*****************************\n";
    std::cout << "enter your choice :\n";
    std::cout << "*****************************\n";
    std::cout << "1. SHOW BALANCE\n";
    std::cout << "2. DEPOSIT MONEY\n";
    std::cout << "3. WITHDRAW MONEY\n";
    std::cout << "4. EXIT\n";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);

    switch (choice){
    case 1:
        showBalance(balance);
        break;
    case 2:balance = balance + deposit();
        showBalance(balance);
        break;
    case 3:balance = balance - withdraw(balance);
        break;
    case 4:std::cout << "Thankyou For Visiting\n";
        break;
    default:std::cout << "INVALID CHOICE\n";
        break;
    }

} while (choice != 4);

return 0;
}

void showBalance(double balance){
std::cout << "Your Balance is: Rp " <<std::setprecision(2) <<std::fixed << balance << '\n';

}
double deposit(){

double amount = 0;
std::cout << "enter amount to be deposited: ";
std::cin >> amount;

if (amount > 0)
{
    return amount;
}
else{
    std::cout << "Thats not a right amount!";
    return 0;
}


}
double withdraw(double balance){

    double amount = 0;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if (amount > balance){
        std::cout << "insufficient funds";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "thats not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}
