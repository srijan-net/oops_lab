#include <iostream>
using namespace std;

class SavingAccount
{
private:
    static float annualInterestRate; 
    float savingBalance;
    int acc_no;

public:
    SavingAccount()
    {
        this->savingBalance = 0;
        this->acc_no = 0;
    }

    SavingAccount(float balance, int acc)
    {
        this->savingBalance = balance;
        this->acc_no = acc;
    }

    static void changeRate(float rate)                             //imp
    {
        annualInterestRate = rate;
    }

    
    float calculateMonthlyInterest()
    {
        float interest = ((this->savingBalance * annualInterestRate) /(12*100));
        this->savingBalance += interest;  // Update the balance with interest
        return interest;
    }

    // Function to display account details
    void display()
    {
        float interest = calculateMonthlyInterest();
        cout << "Acc No\tInterest\tBalance\n";
        cout << acc_no << "\t" << interest << "\t \t" << savingBalance << endl;
    }
};

float SavingAccount::annualInterestRate = 4.0;

int main()
{
    cout << "intrest rate ->4.0\n";
    SavingAccount s1(2000, 101);
    SavingAccount s2(3000, 202);
    s1.display();
    s2.display();
    cout << "\nintrest rate ->5.0  next month\n";
    SavingAccount::changeRate(5.0);                       //imp
    s1.display();
    s2.display();
    return 0;
}
