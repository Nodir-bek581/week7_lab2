#include  <iostream>
using namespace std;

//Problem 5
/*
int initialBalance = 500;

void deposit(int& balance) {
    cout<<"Enter Deposit Balance: ";
    int deposit;
    cin>>deposit;
    balance += deposit;
    cout<<"Your new balance: "<<balance<<endl;
}
void withdraw(int& balance) {
    cout<<"Enter Withdrawal Balance: ";
    int withdrawal;
    cin>>withdrawal;
    if (withdrawal > initialBalance) {
        cout << "You don\'t have enough money" << endl;
    }
    else {
        balance -= withdrawal;
        cout<<"Your Withdrawal Balance: "<<balance<<endl;
    }
}
void checkBalance(int balance) {
    cout<<"Your Balance: "<<balance<<endl;
}

int main() {
    int choice;
    do {

        cout<<"1. Deposit\n2. Withdraw\n3. Check balance\n4. Exit\n";
        cout<<"Please choose your action:"<<endl;
        cin>>choice;
        switch(choice) {
            case 1:
                deposit(initialBalance);
                break;
            case 2:
                withdraw(initialBalance);
                break;
            case 3:
                checkBalance(initialBalance);
                break;

        }
    } while (choice != 4);
    if (choice == 4) {
        cout<<"Thank you for choosing our bank."<<endl;
    }
}
*/

//Problem 6
/*
float totalPrice(float price, int quantity) {
    return price * quantity;
}

int main() {
    int choice, tickets;
    char again;
    float total;

    do {
        cout<<"1. Movie A: $8\n2. Movie B: $10\n3. Movie C: $12\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        cout<<"Enter the number of tickets: ";
        cin>>tickets;

        switch (choice) {
            case 1:
                total = totalPrice(8, tickets);
                break;
            case 2:
                total = totalPrice(10, tickets);
                break;
            case 3:
                total = totalPrice(12, tickets);
                break;
            default:
                cout<<"Wrong Choice\n";
                total=0;
        }
        cout<<"Total Price: "<<total<<endl;
        cout<<"Do you want to continue?(y/n):";
        cin>>again;
    } while (again=='y' or again=='Y');


    cout<<"Thank you for choosing our cinema."<<endl;
    return 0;
}
*/


//Problem 8

float totalPrice(int narx, int quantity) {
    return narx * quantity;
}

int main() {
    int choice, number;
    float total;
    do {
        cout<<"1. Pizza $10\n2. Burger $8\n3. Salad $5\n4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        cout<<"Enter the number of order: ";
        cin>>number;
        switch(choice) {
            case 1:
                total=totalPrice(10, number);
                break;
            case 2:
                total=totalPrice(8, number);
                break;
            case 3:
                total=totalPrice(5, number);
                break;
        }
        cout<<"Total Price: "<<total<<endl;
    } while (choice!=4);
    return 0;
}

