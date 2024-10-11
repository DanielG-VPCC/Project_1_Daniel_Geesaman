
#include <iostream>
#include <iomanip>
using namespace std;

const double rate1 = 0.05;
const double rate2 = 0.10;
const double rate3 = 0.12;
const double rate4 = 0.14;
const double rate5 = 0.16;

int main()
{
    double sales;
    double commissionAmount;
    double advancedPay;
    double remainingPay;

    cout << "How much did this agent make in sales?";
    cin >> sales;
    cout << "How much advanced pay did this employee take?";
    cin >> advancedPay;

    if (sales < 10000)
    { 
        commissionAmount = sales * rate1;
        remainingPay = commissionAmount - advancedPay;
        cout << fixed << setprecision (2) << "Pay results" << endl
        << "----------------" << endl
        << "Sales: $" << sales << endl
        << "Commission Rate: " << rate1 << endl
        << "Commission: $" << commissionAmount << endl
        << "Advanced Pay: $" << advancedPay << endl
        << "Remaining Pay: $" << remainingPay << endl;
    }
    else if (sales >= 10000 and sales < 15000)
    {
        commissionAmount = sales * rate2;
        remainingPay = commissionAmount - advancedPay;
        cout << fixed << setprecision(2) << "Pay results" << endl
        << "----------------" << endl
        << "Sales: $" << sales << endl
        << "Commission Rate: " << rate2 << endl
        << "Commission: $" << commissionAmount << endl
        << "Advanced Pay: $" << advancedPay << endl
        << "Remaining Pay: $" << remainingPay << endl;
    }
    else if (sales >= 15000 and sales < 18000)
    {
        commissionAmount = sales * rate3;
        remainingPay = commissionAmount - advancedPay;
        cout << fixed << setprecision(2) << "Pay results" << endl
        << "----------------" << endl
        << "Sales: $" << sales << endl
        << "Commission Rate: " << rate3 << endl
        << "Commission: $" << commissionAmount << endl
        << "Advanced Pay: $" << advancedPay << endl
        << "Remaining Pay: $" << remainingPay << endl;
    }
    else if (sales >= 18000 and sales <22000)
    {
        commissionAmount = sales * rate4;
        remainingPay = commissionAmount - advancedPay;
        cout << fixed << setprecision(2) << "Pay results" << endl
        << "----------------" << endl
        << "Sales: $" << sales << endl
        << "Commission Rate: " << rate4 << endl
        << "Commission: $" << commissionAmount << endl
        << "Advanced Pay: $" << advancedPay << endl
        << "Remaining Pay: $" << remainingPay << endl;
    }
    else
    {
        commissionAmount = sales * rate5;
        remainingPay = commissionAmount - advancedPay;
        cout << fixed << setprecision(2) << "Pay results" << endl
        << "----------------" << endl
        << "Sales: $" << sales << endl
        << "Commission Rate: " << rate5 << endl
        << "Commission: $" << commissionAmount << endl
        << "Advanced Pay: $" << advancedPay << endl
        << "Remaining Pay: $" << remainingPay << endl;
    }

}
