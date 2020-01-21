#include <iostream>

using namespace std;

int main()
{
    //Constants
    double const NORMAL_PAY = 16.00;    //Pay per hour
    double const OVERTIME_MULTIPLIER = 1.5; //To calculate overtime pay
    
    double const SOCIAL_TAX_RATE = 0.06; //Social security
    double const FED_TAX_RATE = 0.14; //Federal income tax
    double const STATE_TAX_RATE = 0.05; //State income tax
    double const MEDICAL_INSURANCE_RATE = 10.00; //Medical insurance

    
    //Input fields
    double normalHours = 0; //User will input
    double overtimeHours = 0;   //User will input
    
    //Calculated fields
    double grossPay = 0; //This will be calculated
    double netPay = 0; //This will be calculated
    
    double socialTax = 0.0; //Calculated social security
    double fedTax = 0.0; //Calculated federal income tax
    double stateTax = 0.0; //Calculated state income tax
    
    
    //User input
    cout << "Please enter the number of normal hours worked in a week: ";
    cin >> normalHours;
    
    cout << "Please enter the number of overtime hours worked in a week: ";
    cin >> overtimeHours;
    
    cout << "Thank you!" << endl << endl;
    
    //Calculated Pay
    
    grossPay = (normalHours * NORMAL_PAY) 
    + (overtimeHours * NORMAL_PAY * OVERTIME_MULTIPLIER);
    
    //Social security tax
    
    socialTax = (grossPay * SOCIAL_TAX_RATE);
    
    //Federal income tax
    
    fedTax = (grossPay * FED_TAX_RATE);
    
    //State tax income tax
    
    stateTax = (grossPay * STATE_TAX_RATE);
    
    //Net pay
    
    netPay = (grossPay - socialTax - fedTax - stateTax - MEDICAL_INSURANCE_RATE);
    
    
    //Report the calculations
    
    cout << "Gross pay:           " << grossPay << endl;
    cout << "Social Security Tax: " << socialTax << endl;
    cout << "Federal Income Tax:  " << fedTax << endl;
    cout << "State Income Tax:    " << stateTax << endl;
    cout << "Medical Insurance:   " << MEDICAL_INSURANCE_RATE << endl;
    cout << "------------------------------" << endl;
    cout << "Net Pay:             " << netPay << endl;
    

    return 0;
}