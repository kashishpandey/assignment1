/*
Problem 3 (employeepay):
An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
$10 per week is withheld for medical insurance. Write a program that will read in the number of hours
worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
the net take-home pay for the week.
*/

#include <iostream>
using namespace std;

int main(){
  double regularHours;
  double overTimeHours;

  double grossPay;
  double socialSecurity;
  double federalIncome;
  double stateIncome;
  double medicalInsurance;
  int medInsurance;

  double totalWithhold; //withhold amount

  cout << "How many regular hours: ";
  cin >> regularHours; // storing into the regular hours varible

  cout << "How many overtime hours";
  cin >> overTimeHours; // storing into the over time hours varible

  regularHours = regularHours * 16.00; // paid at a rate of $16.00 per hour
  overTimeHours = overTimeHours * 1.5; // overtime rate of one and one-half times

  grossPay = regularHours + overTimeHours;

  socialSecurity = grossPay * .06; //  6% is withheld for Social Security tax
  federalIncome = grossPay * .14; // 14% is withheld for federal income tax
  stateIncome = grossPay * .05; //  5% is withheld for state income tax
  medInsurance = 10; // $10 per week is withheld for medical insurance
  totalWithhold = socialSecurity + federalIncome + stateIncome + medInsurance; // combinination of all 4

  cout << "Gross pay: " << grossPay << endl << endl;
  cout << "Social security: " << socialSecurity << endl;
  cout << "Federal income: " << federalIncome << endl;
  cout << "State income: " << stateIncome << endl;

  cout << "Total withholding amount: " << totalWithhold << endl;

  cout << "Net pay: " << grossPay - (socialSecurity + federalIncome + stateIncome + medInsurance) << endl ;


}
