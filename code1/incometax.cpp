#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    long long income;

    cout << "Enter Income: ";
    cin >> income;

    // add in note.md for normal digits
    long long taxableIncome = income - 75000;

    if (taxableIncome < 0)
    {
        taxableIncome = 0;
    }

    if (taxableIncome <= 1200000)
    {
        cout << "\nTaxable Income = " << taxableIncome << endl;
        cout << "Tax Payable = 0" << endl;
        return 0;
    }

    double tax = 0;
    long long temp = taxableIncome;

    if (temp > 2400000)
    {
        tax += (temp - 2400000) * 0.30;
        temp = 2400000;
    }
    if (temp > 2000000)
    {
        tax += (temp - 2000000) * 0.25;
        temp = 2000000;
    }
    if (temp > 1600000)
    {
        tax += (temp - 1600000) * 0.20;
        temp = 1600000;
    }
    if (temp > 1200000)
    {
        tax += (temp - 1200000) * 0.15;
        temp = 1200000;
    }
    if (temp > 800000)
    {
        tax += (temp - 800000) * 0.10;
        temp = 800000;
    }
    if (temp > 400000)
    {
        tax += (temp - 400000) * 0.05;
    }
    tax *= 1.04;

    cout << fixed << setprecision(0);

    cout << "\nTaxable Income = " << taxableIncome << endl;
    cout << "TaxPayable = " << tax << endl;

    return 0;
}
