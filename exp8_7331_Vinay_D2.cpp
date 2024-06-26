//Maintain a banking application that simulates transactions between multiple bank accounts. Each bank
account has a unique account number, and you need to keep track of the total number of transactions
performed across all accounts.
a. Design a class to represent bank accounts in C++ and utilize static variables and methods to manage
transaction data.
b. Discuss how you would implement a static variable to count the total number of transactions and provide
static methods to access this variable and update it whenever a transaction occurs.




#include <iostream>

class BankAccount {
private:
  int accountNumber;
  double balance;
  static int totalTransactions;

public:
  BankAccount(int accountNumber, double initialBalance = 0.0) :
      accountNumber(accountNumber), balance(initialBalance) {}

  void deposit(double amount) {
    balance += amount;
    totalTransactions++;
  }

  void withdraw(double amount) {
    if (amount <= balance) {
      balance -= amount;
      totalTransactions++;
    } else {
      std::cout << "Insufficient funds for withdrawal." << std::endl;
    }
  }

  void transfer(double amount, BankAccount& recipient) {
    if (amount <= balance) {
      balance -= amount;
      recipient.deposit(amount);
      totalTransactions += 2;  
    } else {
      std::cout << "Insufficient funds for transfer." << std::endl;
    }
  }

  int getAccountNumber() const { return accountNumber; }

  double getBalance() const { return balance; }

  static int getTotalTransactions() {
    return totalTransactions;
  }

  static void resetTotalTransactions() {
    totalTransactions = 0;
  }

};

int BankAccount::totalTransactions = 0;

int main() {
  BankAccount account1(125, 100.0);
  BankAccount account2(521);

  account1.deposit(20.0);
  account2.withdraw(30.0);
  account1.transfer(85.0, account2);

  std::cout << "Account 1 balance: $" << account1.getBalance() << std::endl;
  std::cout << "Account 2 balance: $" << account2.getBalance() << std::endl;
  std::cout << "Total transactions: " << BankAccount::getTotalTransactions() << std::endl;

  return 0;
}
