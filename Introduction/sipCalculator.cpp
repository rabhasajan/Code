#include<iostream>
#include<cmath>
using namespace std;

//used double because i am returning a double datatype.
double calculateSip(double principle, int months, double annualInterestRate){
    double monthlyInterestRate = annualInterestRate / 12 / 100;
    double maturityAmount = principle * (std::pow(1 + monthlyInterestRate, months) - 1) / monthlyInterestRate;

    return maturityAmount;
}

int main(){
    double principle;
    int months;
    double annualInterestRate;
    cout << "Enter principal amount: ";
    cin >> principle;
    cout << "Enter SIP duration in months: ";
    cin >> months;
    cout << "Enter expected annual interest rate (in percentage): ";
    cin >> annualInterestRate;

    double maturityAmount = calculateSip(principle, months, annualInterestRate);
    cout << "Maturity amount after " << months << " months: " << maturityAmount << endl;
    return 0;
}