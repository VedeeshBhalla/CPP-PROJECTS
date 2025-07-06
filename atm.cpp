#include<bits/stdc++.h>
using namespace std;

bool login(){
    int pin, attempts = 0;
    const int correctPin = 1210;
    while(attempts < 3){
        cout << "Enter Pin : ";
        cin >> pin;
        if(pin == correctPin){
            cout << "Correct Pin, Proceed Ahead" << endl << endl;
            return true;
        }
        else{
            cout << "Login Failed, Try Again" << endl;
            attempts++;
        }
    }
    cout << "Too many incorrect attempts" << endl;
    return false;
}

void ShowMenu(){
    cout << "\n----------- ATM MENU -----------" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Exit" << endl;
    cout << "--------------------------------" << endl;
}

void CheckBalance(float balance){
    cout << "Current Balance: ₹" << balance << endl;
}

float Withdraw(float balance){
    float amount;
    cout << "Enter amount to be withdrawn: ₹";
    cin >> amount;

    if(amount > balance) {
        cout << "❌ Insufficient Balance" << endl;
    }
    else if(amount <= 0) {
        cout << "❌ Invalid Amount" << endl;
    }
    else{
        balance -= amount;
        cout << "✅ ₹" << amount << " withdrawn successfully" << endl;
    }

    return balance;
}

float Deposit(float balance) {
    float amount;
    cout << "Enter amount to deposit: ₹";
    cin >> amount;

    if(amount <= 0) {
        cout << "❌ Invalid deposit amount" << endl;
    } else {
        balance += amount;
        cout << "✅ ₹" << amount << " deposited successfully" << endl;
    }

    return balance;
}

int main(){
    float balance = 0;
    int choice;

    if(!login()){
        cout << "Access Denied" << endl;
        return 0;
    }

    do {
        ShowMenu();
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: CheckBalance(balance); break;
        case 2: balance = Withdraw(balance); break;
        case 3: balance = Deposit(balance); break;
        case 4: cout << "Thank you for using the ATM" << endl; break;
        default: cout << "❌ Invalid Option" << endl;
        }

    } while (choice != 4); 

    return 0;
}