
// Project Name: Bank Project 1
// Programmer: DD
// Date Written: Feb 25, 2021
// Desc: This program will allow Robert to input his password and access both his checking and savings accounts.

//la biblioteca
#include <iostream>
#incluse <math.h>
using namespace std;

//driver method 
int main ( ){

//var dex
int Password;
int SavingsAccountBalance;
int CheckingAccountBalance;
int SavingsDeposit;
int num1;

//if password isnt 123
//then dont let em in
//otherwise let em in 
int Password = 123;

//case1: deny 
if( Password < 123 ) {
cout << "access denied";
} 

//case 2: accept 
if( Password = 123 ) {
cout << "access granted";
}

int SavingsAccountBalance = 2500;
int SavingsDeposit = SavingsAccountBalance + num1;

cout << ”Hi Robert! Please enter your Password” << endl;
//user ip password, case1-2
cin << Password << endl;

cout << “How much would you like to deposit into your savings?” << endl;
//user ip deposit amount 
cin << num1 << endl;

cout << SavingsDeposit & “dollars. This is your new savings balance.” << endl;

//var dex2
int num2;
int SavingsChecking;
int CheckingAccountBalance = 35;
int SavingsChecking = CheckingAccountBalance + num2;

//successfully gained access
cout << “We have successfully accessed your checking account. How much would you like to deposit?” << endl;
//user ip deposit 
cin << num2 << endl;

cout << SavingsChecking & “dollars. This is your new checking balance.” << endl;
cout << “Thank You for banking with us Robert, have a nice day!” << endl;


return 0;

}
