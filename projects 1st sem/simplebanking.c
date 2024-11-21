#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100

typedef struct {
    int accountNumber;
    char name[50];
    double balance;
} Account;

Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        printf("Cannot create more accounts. Maximum limit reached.\n");
        return;
    }
    
    Account newAccount;
    newAccount.accountNumber = accountCount + 1;
    printf("Enter account holder's name: ");
    scanf(" %[^\n]", newAccount.name);
    newAccount.balance = 0.0;

    accounts[accountCount++] = newAccount;
    printf("Account created successfully! Account Number: %d\n", newAccount.accountNumber);
}

void deposit() {
    int accountNumber;
    double amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber < 1 || accountNumber > accountCount) {
        printf("Invalid account number!\n");
        return;
    }

    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);
    if (amount <= 0) {
        printf("Invalid amount. Please enter a positive number.\n");
        return;
    }

    accounts[accountNumber - 1].balance += amount;
    printf("Amount deposited successfully! New balance: %.2lf\n", accounts[accountNumber - 1].balance);
}

void withdraw() {
    int accountNumber;
    double amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber < 1 || accountNumber > accountCount) {
        printf("Invalid account number!\n");
        return;
    }

    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);
    if (amount <= 0) {
        printf("Invalid amount. Please enter a positive number.\n");
        return;
    }

    if (accounts[accountNumber - 1].balance < amount) {
        printf("Insufficient balance!\n");
        return;
    }

    accounts[accountNumber - 1].balance -= amount;
    printf("Amount withdrawn successfully! New balance: %.2lf\n", accounts[accountNumber - 1].balance);
}

void checkBalance() {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber < 1 || accountNumber > accountCount) {
        printf("Invalid account number!\n");
        return;
    }

    printf("Account holder: %s\n", accounts[accountNumber - 1].name);
    printf("Balance: %.2lf\n", accounts[accountNumber - 1].balance);
}

void displayMenu() {
    printf("\n--- Banking System Menu ---\n");
    printf("1. Create Account\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Check Balance\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;
    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                printf("Exiting the banking system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }
    return 0;
}
