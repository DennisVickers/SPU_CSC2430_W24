#include <iostream>
using namespace std;

class BankAccount {
private:
   // Private data members
   string ownerName;
   double balance;

public:
   // Constructor to initialize the account
   BankAccount(string name, double initialBalance) {
      ownerName = name;
      balance = initialBalance;
   }

   // Public method to deposit money into the account
   void deposit(double amount) {
      if (amount > 0) {
         balance += amount;
         cout << "Deposit successful. New balance is: $" << balance << endl;
      } else {
         cout << "Invalid deposit amount." << endl;
      }
   }

   // Public method to withdraw money from the account
   void withdraw(double amount) {
      if (amount > 0 && amount <= balance) {
         balance -= amount;
         cout << "Withdrawal successful. Remaining balance is: $" << balance << endl;
      } else {
         cout << "Invalid or insufficient funds for withdrawal." << endl;
      }
   }

   // Public method to display the current balance
   void displayBalance() const {
      cout << "The balance of the account owned by " << ownerName << " is $" << balance << endl;
   }
};

int main() {
   BankAccount account("Bob Allen", 1000); // Creating an account with initial balance of $1000
   account.deposit(500); // Depositing money into the account
   account.withdraw(200); // Withdrawing money from the account
   account.displayBalance(); // Displaying the balance

   return 0;
}
